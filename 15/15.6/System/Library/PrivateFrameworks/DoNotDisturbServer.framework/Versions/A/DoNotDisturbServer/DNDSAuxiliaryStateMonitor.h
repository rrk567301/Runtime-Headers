@class NSObject;
@protocol OS_dispatch_queue;

@interface DNDSAuxiliaryStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char _presentationModeEnabled;
    char _screenShared;
    char _screenMirrored;
    void *_notificationID;
}

@property (readonly, nonatomic, getter=isPresentationModeEnabled) char presentationModeEnabled;
@property (nonatomic, getter=isScreenShared) char screenShared;
@property (nonatomic, getter=isScreenMirrored) char screenMirrored;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_updateIsInPresentationModeForFrontMostApplication;
- (void)_queue_updateIsInPresentationModeForUIPresentationMode:(id)a0;
- (void)_registerForPresentationModeChanges;

@end
