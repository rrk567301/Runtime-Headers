@class NSOperation, NSArray;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
    void *_figAssetWriterCallbackContextToken;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    BOOL _figAssetWriterIsRemote;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation;

- (id)initWithConfigurationState:(id)a0 finishWritingOperations:(id)a1 figAssetWriterCallbackContextToken:(void *)a2 figAssetWriter:(struct OpaqueFigAssetWriter { } *)a3 figAssetWriterIsRemote:(BOOL)a4;
- (void)dealloc;
- (long long)status;
- (void)cancelWriting;
- (void)_finishWritingOperationsDidFinish;

@end
