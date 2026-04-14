@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (id)initWithRunNode:(id)a0;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;

@end
