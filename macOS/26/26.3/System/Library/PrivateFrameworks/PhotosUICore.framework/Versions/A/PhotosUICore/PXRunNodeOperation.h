@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
