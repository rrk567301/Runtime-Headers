@class NSMutableArray, NSHashTable;

@interface AVCaptureDeviceInternal_Tundra : NSObject {
    int openRefCount;
    char usingDevice;
    int lockedForConfigurationRefCount;
    NSHashTable *linkedDevices;
    NSMutableArray *activeReactions;
}

- (void)dealloc;
- (id)init;

@end
