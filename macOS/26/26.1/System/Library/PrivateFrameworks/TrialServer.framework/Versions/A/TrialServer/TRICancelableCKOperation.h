@class _PASLock;

@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (id)initWithOperation:(id)a0;
- (void)addOperation:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
