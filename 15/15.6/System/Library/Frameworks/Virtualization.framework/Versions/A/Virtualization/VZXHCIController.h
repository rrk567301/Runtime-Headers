@interface VZXHCIController : VZUSBController

- (void)detachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (char)_capturePassthroughDevicesWithError:(id *)a0;
- (id)_initWithVirtualMachine:(id)a0 usbControllerIndex:(unsigned long long)a1 usbDevices:(id)a2;
- (void)_releasePassthroughDevices;

@end
