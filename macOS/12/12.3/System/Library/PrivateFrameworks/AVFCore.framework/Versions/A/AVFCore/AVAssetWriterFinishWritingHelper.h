@class NSOperation, NSArray;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
    void *_figAssetWriterCallbackContextToken;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation;

- (void)dealloc;
- (long long)status;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)a0 finishWritingOperations:(id)a1 figAssetWriterCallbackContextToken:(void *)a2;
- (void)_finishWritingOperationsDidFinish;

@end
