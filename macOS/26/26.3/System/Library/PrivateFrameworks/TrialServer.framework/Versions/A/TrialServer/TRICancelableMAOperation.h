@class _PASLock;

@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentAsset:(id)a0;
- (void)addSemaphore:(id)a0;

@end
