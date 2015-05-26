//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _WINDOWS_DEVICES_NATIVE_H_
#define _WINDOWS_DEVICES_NATIVE_H_

#include <TinyCLR_Interop.h>
struct Library_windows_devices_native_Windows_Devices_Enumeration_DeviceInformation
{
    static const int FIELD_STATIC__s_I2cPrefix = 0;
    static const int FIELD_STATIC__s_SpiPrefix = 1;

    static const int FIELD__m_id = 1;
    static const int FIELD__m_isDefault = 2;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioController
{
    static const int FIELD_STATIC__s_instance = 2;

    TINYCLR_NATIVE_DECLARE(get_PinCount___I4);

    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPin
{
    static const int FIELD_STATIC__s_eventListener = 3;

    static const int FIELD__m_syncLock = 1;
    static const int FIELD__m_disposed = 2;
    static const int FIELD__m_pinNumber = 3;
    static const int FIELD__m_driveMode = 4;
    static const int FIELD__m_lastOutputValue = 5;
    static const int FIELD__m_callbacks = 6;

    TINYCLR_NATIVE_DECLARE(get_DebounceTimeout___mscorlibSystemTimeSpan);
    TINYCLR_NATIVE_DECLARE(set_DebounceTimeout___VOID__mscorlibSystemTimeSpan);
    TINYCLR_NATIVE_DECLARE(Read___WindowsDevicesGpioGpioPinValue);
    TINYCLR_NATIVE_DECLARE(Write___VOID__WindowsDevicesGpioGpioPinValue);
    TINYCLR_NATIVE_DECLARE(InitNative___BOOLEAN__I4);
    TINYCLR_NATIVE_DECLARE(DisposeNative___VOID);
    TINYCLR_NATIVE_DECLARE(SetDriveModeInternal___VOID__WindowsDevicesGpioGpioPinDriveMode);

    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPinEvent
{
    static const int FIELD__PinNumber = 3;
    static const int FIELD__Edge = 4;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPinEventListener
{
    static const int FIELD__m_pinMap = 1;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPinValueChangedEventArgs
{
    static const int FIELD__m_edge = 1;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cConnectionSettings
{
    static const int FIELD__m_slaveAddress = 1;
    static const int FIELD__m_busSpeed = 2;
    static const int FIELD__m_sharingMode = 3;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cDevice
{
    static const int FIELD_STATIC__s_deviceLock = 4;
    static const int FIELD_STATIC__s_deviceRefs = 5;
    static const int FIELD_STATIC__s_device = 6;

    static const int FIELD__m_deviceId = 1;
    static const int FIELD__m_settings = 2;
    static const int FIELD__m_syncLock = 3;
    static const int FIELD__m_disposed = 4;
    static const int FIELD__m_configuration = 5;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cTransferResult
{
    static const int FIELD__Status = 1;
    static const int FIELD__BytesTransferred = 2;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Windows_Devices;

#endif  //_WINDOWS_DEVICES_NATIVE_H_
