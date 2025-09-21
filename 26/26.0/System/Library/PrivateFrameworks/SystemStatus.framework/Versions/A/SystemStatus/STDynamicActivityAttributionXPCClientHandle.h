@class NSString, NSXPCConnection;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicActivityAttributionClientHandle, STDynamicAttributionXPCServerProtocol> {
    struct { unsigned int val[8]; } _auditToken;
}

@property (readonly, weak, nonatomic) id<STDynamicActivityAttributionServerHandle> serverHandle;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void)currentAttributionsDidChange:(id)a0;
- (void)setCurrentAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 reply:(id /* block */)a2;
- (struct { unsigned int x0[8]; })auditToken;
- (void)setCurrentAttributionKey:(id)a0 application:(id)a1 reply:(id /* block */)a2;
- (void)setCurrentAttributionWebsiteString:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 reply:(id /* block */)a2;
- (void)setCurrentAttributionLocalizableKey:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)subscribeToUpdates;

@end
