@class BSEventQueueLock;

@interface FBSceneEventQueue : BSEventQueue {
    BSEventQueueLock *_idleEventLock;
}

+ (void)executeWhenIdle:(id /* block */)a0;
+ (BOOL)isIdleWorkSuspended;
+ (id)suspendIdleWorkForReason:(id)a0;

- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)executeOrAppend:(id /* block */)a0;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (void).cxx_destruct;
- (void)_noteQueueDidDrain;

@end
