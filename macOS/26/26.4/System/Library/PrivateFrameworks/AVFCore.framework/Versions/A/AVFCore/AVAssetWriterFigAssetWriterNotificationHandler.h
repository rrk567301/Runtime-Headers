@class AVWeakReference;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    int _notificationHandlersAreRegistered;
}

@property (retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate;
@property (weak) id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;

- (void)_handleFailedNotificationWithError:(id)a0;
- (void)_callDelegateIfNotCalledWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)_handleCompletedWritingNotification;
- (void)_teardownNotificationHandlers;
- (void)dealloc;

@end
