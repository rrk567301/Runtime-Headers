@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)future;
- (id)debugDescription;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)redactedDescription;
- (void)failWithError:(id)a0;
- (void)dealloc;
- (void)succeedWithResult:(id)a0;

@end
