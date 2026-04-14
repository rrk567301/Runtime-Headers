@class NSString, AVAssetWriterFigAssetWriterNotificationHandler;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)cancel;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)start;
- (BOOL)isAsynchronous;
- (void)didEnterTerminalState;
- (id)init;
- (void)dealloc;

@end
