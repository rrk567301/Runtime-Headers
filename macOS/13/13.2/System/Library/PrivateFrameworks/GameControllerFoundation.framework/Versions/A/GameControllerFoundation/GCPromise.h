@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)failWithError:(id)a0;
- (id)redactedDescription;
- (void).cxx_destruct;
- (void)cancel;
- (id)future;
- (void)succeedWithResult:(id)a0;

@end
