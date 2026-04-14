@class NSMutableDictionary, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MTRPluginRemoteSessionManager : NSObject <MTRXPCServerProtocol, MTRXPCClientProtocol>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSHashTable *pluginClients;
@property (retain) NSMutableDictionary *remoteSessions;
@property (retain) NSMutableDictionary *bufferedExecutionTimers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)respondsToSelector:(SEL)a0;
- (oneway void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (oneway void)device:(id)a0 receivedEventReport:(id)a1;
- (id)init;
- (void)_recomputeStateForcingRegistration:(BOOL)a0;
- (void)addPluginClient:(id)a0;
- (void)recomputeStateForcingRegistration:(BOOL)a0;
- (void)removePluginClient:(id)a0;

@end
