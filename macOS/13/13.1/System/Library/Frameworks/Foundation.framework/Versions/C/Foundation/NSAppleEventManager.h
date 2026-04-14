@class NSAppleEventDescriptor;

@interface NSAppleEventManager : NSObject {
    BOOL _isPreparedForDispatch;
    char _padding[3];
}

@property (readonly, retain) NSAppleEventDescriptor *currentAppleEvent;
@property (readonly, retain) NSAppleEventDescriptor *currentReplyAppleEvent;

+ (id)sharedAppleEventManager;
+ (BOOL)_eventAccessGroups:(id)a0 matchesDefinitionGroups:(id)a1;

- (id)init;
- (void)setEventHandler:(id)a0 andSelector:(SEL)a1 forEventClass:(unsigned int)a2 andEventID:(unsigned int)a3;
- (void)removeEventHandlerForEventClass:(unsigned int)a0 andEventID:(unsigned int)a1;
- (short)dispatchRawAppleEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withRawReply:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1 handlerRefCon:(void *)a2;
- (const struct __NSAppleEventManagerSuspension { } *)suspendCurrentAppleEvent;
- (id)appleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (id)replyAppleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (void)setCurrentAppleEventAndReplyEventWithSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (void)resumeWithSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (void)_prepareForDispatch;
- (id)_perThreadHandlingStack:(BOOL)a0;
- (id)_topHandling;
- (void)_pushHandling:(id)a0;
- (id)_poppedTopHandling;
- (BOOL)_popIfTopHandling:(id)a0;
- (void)_suspendIfTopHandling:(id)a0;
- (void)_resumeIfNotTopHandling:(id)a0 withScriptCommandResult:(id)a1;
- (void)_setEventSecurityHandler:(id)a0 andSelector:(SEL)a1 forEventClass:(unsigned int)a2 andEventID:(unsigned int)a3;

@end
