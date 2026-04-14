@class BSEventQueueLock;

@interface FBSceneEventQueue : BSEventQueue {
    BSEventQueueLock *_idleEventLock;
}

+ (void)executeWhenIdle:(id /* block */)a0;
+ (BOOL)isIdleWorkSuspended;
+ (id)suspendIdleWorkForReason:(id)a0;

- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidUnlock;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidLock;
- (void).cxx_destruct;
- (void)executeOrAppend:(id /* block */)a0;

@end
