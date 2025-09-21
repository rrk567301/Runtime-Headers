@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    CPLTransaction *_dirty;
}

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void)_releaseDirty;
- (void).cxx_destruct;

@end
