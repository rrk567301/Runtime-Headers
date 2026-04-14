@class NSMutableArray, NSHashTable;

@interface AVCaptureDeviceInternal_Tundra : NSObject {
    int openRefCount;
    BOOL usingDevice;
    int lockedForConfigurationRefCount;
    NSHashTable *linkedDevices;
    NSMutableArray *activeReactions;
}

- (id)init;
- (void)dealloc;

@end
