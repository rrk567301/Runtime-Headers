@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (id)completeFetchOperation;
- (void)addFetchStep:(SEL)a0;
- (void)performOperation;
- (id)init;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void).cxx_destruct;
- (void)addNonCriticalFetchStep:(SEL)a0;
- (void)_performNextStep;

@end
