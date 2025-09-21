@class NSMutableArray, AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject {
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    char usingDevice;
    AVCaptureDeviceInput *activeInput;
    NSMutableArray *activeReactions;
}

- (void)dealloc;
- (id)init;

@end
