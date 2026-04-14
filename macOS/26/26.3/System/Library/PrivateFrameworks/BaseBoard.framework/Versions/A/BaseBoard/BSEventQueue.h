@class NSString, NSArray, BSEventQueueEvent, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    BOOL _processingEvents;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *pendingEvents;
@property (readonly, nonatomic) BSEventQueueEvent *executingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidUnlock;
- (void)executeOrInsertEvents:(id)a0 atPosition:(int)a1;
- (id)succinctDescriptionBuilder;
- (void)_noteQueueDidDrain;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_noteQueueDidLock;
- (void)executeOrInsertEvent:(id)a0 atPosition:(int)a1;
- (void)relinquishLock:(id)a0;
- (id)succinctDescription;
- (id)initWithName:(id)a0 onQueue:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasEventWithPrefix:(id)a0;
- (BOOL)_shouldProcessEvent:(id)a0 enqueuedDuringExecutionOfEvent:(id)a1;
- (void)cancelEventsWithName:(id)a0;
- (void)_noteWillCancelEventsWithName:(id)a0 count:(unsigned long long)a1;
- (BOOL)hasEventWithName:(id)a0;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)flushPendingEvents;
- (void)flushEvents:(id)a0;
- (void)flushAllEvents;
- (id)acquireLockForReason:(id)a0;

@end
