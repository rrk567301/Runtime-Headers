@class NSHashTable;

@interface AVCaptureDeviceInternal_Tundra : NSObject {
    int openRefCount;
    BOOL usingDevice;
    int lockedForConfigurationRefCount;
    NSHashTable *linkedDevices;
}

@end
