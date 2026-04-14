@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void)addFetchStep:(SEL)a0;
- (id)completeFetchOperation;
- (void)addNonCriticalFetchStep:(SEL)a0;
- (void).cxx_destruct;
- (void)_performNextStep;
- (void)performOperation;
- (id)init;

@end
