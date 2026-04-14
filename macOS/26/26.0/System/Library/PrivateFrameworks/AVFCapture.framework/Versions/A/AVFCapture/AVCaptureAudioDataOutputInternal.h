@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureAudioDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    unsigned int spatialAudioChannelLayoutTag;
}

- (void)dealloc;
- (id)init;

@end
