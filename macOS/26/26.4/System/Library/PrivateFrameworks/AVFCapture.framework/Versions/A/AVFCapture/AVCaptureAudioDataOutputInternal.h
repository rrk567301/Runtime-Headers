@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureAudioDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    unsigned int spatialAudioChannelLayoutTag;
}

- (id)init;
- (void)dealloc;

@end
