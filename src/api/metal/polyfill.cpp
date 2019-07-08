#include <occa/defines.hpp>

#if !OCCA_METAL_ENABLED

#include <occa/api/metal.hpp>

namespace occa {
  namespace api {
    namespace metal {
      int getDeviceCount() {
        return 0;
      }

      device_t getDevice(const int deviceId) {
        return device_t();
      }

      //---[ Event ]--------------------
      event_t::event_t() {}

      event_t::event_t(void *eventObj_,
                       const int eventId_,
                       void *commandBufferObj_) {}

      event_t::event_t(const event_t &other) {}

      void event_t::free() {}
      void event_t::freeCommandBuffer() {}

      void event_t::waitUntilCompleted() {}

      double event_t::getTime() const {
        return 0;
      }

      //---[ Buffer ]-------------------
      buffer_t::buffer_t(void *bufferObj_) {}

      buffer_t::buffer_t(const buffer_t &other) {}

      void buffer_t::free() {}

      void* buffer_t::getPtr() const {
        return (void*) 0;
      }

      //---[ Command Queue ]------------
      commandQueue_t::commandQueue_t() {}

      commandQueue_t::commandQueue_t(device_t &device_,
                                     void *commandQueueObj_) {}

      commandQueue_t::commandQueue_t(const commandQueue_t &other) {}

      void commandQueue_t::free() {}
      void commandQueue_t::freeLastCommandBuffer() {}

      event_t commandQueue_t::createEvent() const {
        return event_t();
      }

      void commandQueue_t::setLastCommandBuffer(void *commandBufferObj) {}

      void commandQueue_t::processEvents(const int eventId) {}

      //---[ Kernel ]-------------------
      kernel_t::kernel_t() {}

      kernel_t::kernel_t(device_t *device_,
                         void *functionObj_) {}

      kernel_t::kernel_t(const kernel_t &other) {}

      void kernel_t::run(commandQueue_t &commandQueue,
                         occa::dim outerDims,
                         occa::dim innerDims,
                         const std::vector<kernelArgData> &arguments) {}

      void kernel_t::free() {}

      //---[ Device ]-------------------
      device_t::device_t(void *deviceObj_) {}

      device_t::device_t(const device_t &other) {}

      void device_t::free() {}

      std::string device_t::getName() const {
        return "";
      }

      udim_t device_t::getMemorySize() const {
        return 0;
      }

      dim device_t::getMaxOuterDims() const {
        return dim();
      }

      dim device_t::getMaxInnerDims() const {
        return dim();
      }

      commandQueue_t device_t::createCommandQueue() const {
        return commandQueue_t();
      }

      kernel_t device_t::buildKernel(const std::string &source,
                                     const std::string &kernelName,
                                     io::lock_t &lock) const {
        return kernel_t();
      }

      buffer_t device_t::malloc(const udim_t bytes,
                                const void *src) const {
        return buffer_t();
      }

      void device_t::memcpy(buffer_t &dest,
                            const udim_t destOffset,
                            const buffer_t &src,
                            const udim_t srcOffset,
                            const udim_t bytes,
                            const bool async) const {}

      void device_t::memcpy(void *dest,
                            const buffer_t &src,
                            const udim_t srcOffset,
                            const udim_t bytes,
                            const bool async) const {}

      void device_t::memcpy(buffer_t &dest,
                            const udim_t destOffset,
                            const void *src,
                            const udim_t bytes,
                            const bool async) const {}

      void device_t::device_t::finish() const {}
    }
  }
}

#endif