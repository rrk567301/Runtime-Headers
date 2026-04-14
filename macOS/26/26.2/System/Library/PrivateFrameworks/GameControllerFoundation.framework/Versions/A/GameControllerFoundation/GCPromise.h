@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)redactedDescription;
- (void)cancel;
- (id)future;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)succeedWithResult:(id)a0;

@end
