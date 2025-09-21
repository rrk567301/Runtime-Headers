@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (char)isReady;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (char)_transitionToState:(unsigned long long)a0;
- (char)cancelIfAble;
- (char)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
