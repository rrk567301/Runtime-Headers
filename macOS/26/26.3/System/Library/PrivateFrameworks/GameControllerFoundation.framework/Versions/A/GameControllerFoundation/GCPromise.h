@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)future;
- (id)debugDescription;
- (void)cancel;
- (id)description;
- (id)init;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)dealloc;
- (void)succeedWithResult:(id)a0;

@end
