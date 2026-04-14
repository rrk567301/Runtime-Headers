@class BSEventQueueLock;

@interface FBSceneEventQueue : BSEventQueue {
    BSEventQueueLock *_idleEventLock;
}

+ (void)executeWhenIdle:(id /* block */)a0;
+ (BOOL)isIdleWorkSuspended;
+ (id)suspendIdleWorkForReason:(id)a0;

- (void)_noteQueueDidDrain;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidLock;
- (void)executeOrAppend:(id /* block */)a0;
- (void)_noteQueueDidUnlock;
- (void).cxx_destruct;

@end
