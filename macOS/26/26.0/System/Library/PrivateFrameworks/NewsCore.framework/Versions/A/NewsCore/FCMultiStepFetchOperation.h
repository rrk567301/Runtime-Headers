@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)performOperation;
- (void)addFetchStep:(SEL)a0;
- (id)init;
- (void)_performNextStep;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void)addNonCriticalFetchStep:(SEL)a0;
- (void).cxx_destruct;
- (id)completeFetchOperation;

@end
