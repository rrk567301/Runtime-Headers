@class HLCommandProcessor;

@interface HLUSBDevice : NSObject {
    struct __IOHIDManager { } *_hidManager;
    struct __IOHIDDevice { } *_device;
    unsigned char _inputBuffer[64];
}

@property (nonatomic) BOOL debug;
@property (retain, nonatomic) HLCommandProcessor *commandProcessor;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (copy, nonatomic) id /* block */ onDeviceRemoved;
@property long long deviceCount;

- (BOOL)isAttached;
- (void)startListening;
- (void)stopListening;
- (void).cxx_destruct;
- (void)dealloc;
- (void)openDevice;
- (void)closeDevice;
- (void)handleDeviceRemoval:(struct __IOHIDDevice { } *)a0;
- (id)initWithDebug:(BOOL)a0;
- (void)sendOutputReportWithReportID:(unsigned char)a0 length:(long long)a1 data:(const char *)a2;

@end
