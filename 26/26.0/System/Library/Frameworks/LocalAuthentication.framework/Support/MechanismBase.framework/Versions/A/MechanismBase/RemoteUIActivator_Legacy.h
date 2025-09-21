@class NSString, NSXPCListener, NSXPCConnection;
@protocol RemoteUIActivatorDelegate;

@interface RemoteUIActivator_Legacy : NSObject <RemoteUIActivating> {
    NSXPCConnection *_agentConnection;
    NSXPCListener *_agentListener;
}

@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_connectToUIAgent:(id)a0;
- (void)_disconnectFromUIAgent;
- (id)_prepareUIAgentListener;
- (BOOL)activateUIWithParams:(id)a0;
- (BOOL)hasInvalidatedUIForRequest:(unsigned int)a0;
- (void)invalidateUIForRequest:(unsigned int)a0;

@end
