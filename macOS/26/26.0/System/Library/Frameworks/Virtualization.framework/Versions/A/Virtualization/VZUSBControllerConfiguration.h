@class NSArray, NSString, NSMutableArray;

@interface VZUSBControllerConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    NSMutableArray *_usbDevices;
}

@property (readonly) struct UsbController { int x0; struct vector<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::UsbPassthrough>, std::allocator<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::UsbPassthrough>>> { void *x0; void *x1; void *x2; } x1; } _usbController;
@property (readonly, copy) NSArray *_usbDevices;
@property (copy) NSArray *usbDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeUSBControllerForVirtualMachine:(id)a0 usbControllerIndex:(unsigned long long)a1 usbDevices:(id)a2;

@end
