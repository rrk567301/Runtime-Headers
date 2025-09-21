@class CATOperation, CATOperationQueue;

@interface CRKWaitForProgressOperation : CATOperation

@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (readonly, nonatomic) CATOperation *operation;
@property (readonly, nonatomic) long long expectedTotalUnitCount;
@property (readonly, nonatomic) long long expctedCompletedUnitCount;

- (void).cxx_destruct;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (id)initWithOperationQueue:(id)a0 operation:(id)a1 expectedCompletedUnitCount:(long long)a2 expectedTotalUnitCount:(long long)a3;
- (void)observedOperationDidFail:(id)a0;
- (void)observedOperationDidProgress:(id)a0;

@end
