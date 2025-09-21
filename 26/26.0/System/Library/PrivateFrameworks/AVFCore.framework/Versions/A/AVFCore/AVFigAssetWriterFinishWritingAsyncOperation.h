@class NSString, AVAssetWriterFigAssetWriterNotificationHandler;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAsynchronous;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)didEnterTerminalState;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;

@end
