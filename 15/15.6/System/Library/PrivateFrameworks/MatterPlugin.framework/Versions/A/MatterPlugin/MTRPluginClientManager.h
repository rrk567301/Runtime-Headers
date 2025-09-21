@class NSMutableArray;

@interface MTRPluginClientManager : NSObject

@property (retain) NSMutableArray *clients;
@property double repeatStateLoggingInterval;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logState;
- (id)_findClientForXPCConnection:(id)a0 remove:(char)a1;
- (void)_scheduleNextStateLog;
- (void)_startStateLoggingIfNeeded;
- (void)_stopStateLogging;
- (id)addClientForXPCConnection:(id)a0 sessionID:(id)a1 queue:(id)a2;
- (id)clientForXPCConnection:(id)a0;
- (char)isPluginClientLowestHash:(id)a0;
- (char)removeClientForXPCConnection:(id)a0;

@end
