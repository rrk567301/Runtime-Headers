@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (void)cancel;
- (id)future;
- (id)description;
- (void)dealloc;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)redactedDescription;
- (id)init;
- (void)succeedWithResult:(id)a0;

@end
