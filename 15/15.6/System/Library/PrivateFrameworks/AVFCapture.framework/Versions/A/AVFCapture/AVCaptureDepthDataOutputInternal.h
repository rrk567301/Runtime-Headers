@class AVCaptureVideoDataOutput, AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureDepthDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    char alwaysDiscardsLateDepthData;
    char filteringEnabled;
    AVCaptureVideoDataOutput *companionSettingsVideoDataOutput;
}

- (void)dealloc;
- (id)init;

@end
