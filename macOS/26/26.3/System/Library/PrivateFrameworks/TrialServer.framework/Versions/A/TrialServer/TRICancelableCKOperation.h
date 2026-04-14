@class _PASLock;

@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (void)cancel;
- (void)addOperation:(id)a0;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;

@end
