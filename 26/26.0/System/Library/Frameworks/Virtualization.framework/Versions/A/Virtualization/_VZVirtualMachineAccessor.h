@class _VZPointingDevice, _VZHIDEventMonitor, _VZVirtualMachineAccessorManager, _VZKeyboard, _VZDisplayPresenter, _VZMultiTouchDevice;
@protocol _VZVirtualMachineAccessorDelegate, _VZDisplayPresenterDelegate;

@interface _VZVirtualMachineAccessor : NSObject <_VZPointingEventSender, _VZMultiTouchEventSender, _VZKeyboardEventSender, _VZHIDAdditions> {
    struct variant<_VZVirtualMachineAccessorManager *__weak, Base::Xpc::Connection> { struct __impl<_VZVirtualMachineAccessorManager *__weak, Base::Xpc::Connection> { union __union<std::__variant_detail::_Trait::_Available, 0UL, _VZVirtualMachineAccessorManager *__weak, Base::Xpc::Connection> { char __dummy; struct __alt<0UL, _VZVirtualMachineAccessorManager *__weak> { _VZVirtualMachineAccessorManager *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, Base::Xpc::Connection> { char __dummy; struct __alt<1UL, Base::Xpc::Connection> { struct Connection { struct OpaqueId *_object; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _accessorManager;
    struct _VZVirtualMachineProperties { struct optional<_VZVirtualMachineProperties::KeyboardProperties> { union { char __null_state_; struct KeyboardProperties { unsigned int device_id; long long type; } __val_; } ; BOOL __engaged_; } keyboard_properties; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } multi_touch_device_id; struct optional<_VZVirtualMachineProperties::PointingDeviceProperties> { union { char __null_state_; struct PointingDeviceProperties { unsigned int device_id; long long type; } __val_; } ; BOOL __engaged_; } pointing_device_properties; long long state; unsigned int usb_passthrough_pointing_device_count; } _virtualMachineProperties;
    struct unique_ptr<_VZVirtualMachineAccessorMessenger, std::default_delete<_VZVirtualMachineAccessorMessenger>> { struct _VZVirtualMachineAccessorMessenger *__ptr_; } _messenger;
    id<_VZVirtualMachineAccessorDelegate> _accessorDelegate;
    id<_VZDisplayPresenterDelegate> _presenterDelegate;
    _VZDisplayPresenter *_presenter;
    BOOL _presenter_requested;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    _VZHIDEventMonitor *_hidEventMonitor;
    _VZKeyboard *_keyboard;
    _VZMultiTouchDevice *_multiTouchDevice;
    _VZPointingDevice *_pointingDevice;
}

@property (readonly) _VZHIDEventMonitor *_hidEventMonitor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processHIDReports:(void *)a0 forDevice:(unsigned int)a1 deviceType:(int)a2;
- (BOOL)_shouldSendHIDReports;
- (void)sendDigitizerEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendKeyboardEvents:(void *)a0 keyboardID:(unsigned int)a1;
- (void)sendMagnifyEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendMouseEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendMultiTouchEvents:(void *)a0 multiTouchDeviceIndex:(unsigned int)a1;
- (void)sendPointerNSEvent:(id)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendQuickLookEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendRotationEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendScrollWheelEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;
- (void)sendSmartMagnifyEvents:(void *)a0 pointingDeviceIndex:(unsigned int)a1;

@end
