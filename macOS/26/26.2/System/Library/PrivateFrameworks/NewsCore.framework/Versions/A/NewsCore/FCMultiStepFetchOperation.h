@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)addFetchStep:(SEL)a0;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void)performOperation;
- (id)completeFetchOperation;
- (void).cxx_destruct;
- (void)_performNextStep;
- (void)addNonCriticalFetchStep:(SEL)a0;
- (id)init;

@end
