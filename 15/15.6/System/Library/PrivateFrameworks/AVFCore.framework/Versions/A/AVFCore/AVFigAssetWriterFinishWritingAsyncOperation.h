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
- (char)isAsynchronous;
- (void)didEnterTerminalState;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(char)a0 error:(id)a1;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;

@end
