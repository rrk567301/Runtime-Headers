@class _PASLock;

@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (void)setCurrentAsset:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)addSemaphore:(id)a0;

@end
