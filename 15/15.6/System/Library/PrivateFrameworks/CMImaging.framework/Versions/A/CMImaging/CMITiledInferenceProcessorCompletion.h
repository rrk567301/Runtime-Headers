@interface CMITiledInferenceProcessorCompletion : NSObject {
    unsigned long long _streamErrors;
    unsigned long long _expectedStreamCompleteCount;
    unsigned long long _streamCompleteCount;
    char _streamComplete;
    unsigned long long _metalErrors;
    char _metalComplete;
    char _completionHandlerExecuted;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)_finalCompletion;
- (void)metalCompletion:(int)a0;
- (void)networkTileCompletion:(int)a0;
- (void)setExpectedTiles:(unsigned long long)a0;

@end
