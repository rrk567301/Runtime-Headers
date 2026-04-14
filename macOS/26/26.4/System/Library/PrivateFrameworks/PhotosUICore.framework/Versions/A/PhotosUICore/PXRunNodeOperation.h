@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
