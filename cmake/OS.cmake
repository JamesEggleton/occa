# Test Apple first because UNIX==true for Apple and Linux.
IF (APPLE)
	SET(OCCA_OS "OCCA_MACOS_OS")
ELSEIF (UNIX)
	SET(OCCA_OS "OCCA_LINUX_OS")
ELSE()
	SET(OCCA_OS "OCCA_WINDOWS_OS")
ENDIF()