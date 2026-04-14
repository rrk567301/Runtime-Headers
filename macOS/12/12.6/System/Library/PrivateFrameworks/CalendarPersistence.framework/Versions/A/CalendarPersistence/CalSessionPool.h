@interface CalSessionPool : NSObject

+ (id)sessions;
+ (BOOL)addSession:(id)a0;
+ (void)timerFiredWithInfo:(id)a0;
+ (void)processChangeRequests;
+ (id)sessionForObjectID:(id)a0;
+ (id)sessionForSessionID:(id)a0;
+ (id)sessionsOfType:(Class)a0;
+ (void)removeSessionForSessionID:(id)a0;
+ (void)synchronizeAll;
+ (void)synchronizeAllWithFlags:(long long)a0;
+ (void)_enableForTesting;

@end
