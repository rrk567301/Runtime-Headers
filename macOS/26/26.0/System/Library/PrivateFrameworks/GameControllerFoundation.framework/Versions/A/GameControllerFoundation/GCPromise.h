@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)future;
- (id)debugDescription;
- (void)dealloc;
- (void)cancel;
- (void)failWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)succeedWithResult:(id)a0;

@end
