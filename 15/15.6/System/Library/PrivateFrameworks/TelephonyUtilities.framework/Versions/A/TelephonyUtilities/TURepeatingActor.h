@class TURepeatingAction, NSObject;
@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isStopped) char stopped;
@property (nonatomic, getter=isCurrentlyPerformingAction) char currentlyPerformingAction;
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction;
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction;
@property (copy, nonatomic) id /* block */ attemptNextIterationBlock;
@property (readonly, nonatomic, getter=isRunning) char running;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)_attemptNextIteration;
- (void)_beginRepeatingAction:(id)a0;
- (void)_completeWithDidFinish:(char)a0;
- (char)_hasIterationsRemaining;
- (void)_stopWithDidFinish:(char)a0;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;

@end
