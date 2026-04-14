@class IOBluetoothDeviceInquiry, NSMutableSet;

@interface GCControllerMBDelegate : NSObject {
    IOBluetoothDeviceInquiry *_inquiry;
    NSMutableSet *_pairings;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)stopScan;
- (void)deviceInquiryComplete:(id)a0 error:(int)a1 aborted:(BOOL)a2;
- (void)deviceInquiryDeviceFound:(id)a0 device:(id)a1;
- (void)deviceInquiryStarted:(id)a0;
- (void)devicePairingConnecting:(id)a0;
- (void)devicePairingFinished:(id)a0 error:(int)a1;
- (void)devicePairingPINCodeRequest:(id)a0;
- (void)devicePairingStarted:(id)a0;
- (void)devicePairingUserConfirmationRequest:(id)a0 numericValue:(unsigned int)a1;
- (void)devicePairingUserPasskeyNotification:(id)a0 passkey:(unsigned int)a1;
- (void)deviceSimplePairingComplete:(id)a0 status:(unsigned char)a1;
- (void)fireCompletionHandler;
- (void)startScan;

@end
