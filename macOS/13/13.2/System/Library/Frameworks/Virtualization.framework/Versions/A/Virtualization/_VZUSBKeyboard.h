@class NSString, VZUSBKeyboardConfiguration;

@interface _VZUSBKeyboard : _VZKeyboard <VZUSBDeviceInternal, _VZUSBDevice> {
    VZUSBKeyboardConfiguration *_configuration;
}

@property (readonly) BOOL canAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
