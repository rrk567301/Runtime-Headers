@class NSString, AVAssetWriterFigAssetWriterNotificationHandler;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)didEnterTerminalState;

@end
