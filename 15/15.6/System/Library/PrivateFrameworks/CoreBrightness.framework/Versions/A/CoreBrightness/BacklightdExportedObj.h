@class NSXPCConnection, NSString, BrightnessSystemInternal;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {
    unsigned long long _clientID;
    char _clientIDSet;
}

@property (nonatomic) BrightnessSystemInternal *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)clientCopyPropertyWithKey:(id)a0 reply:(id /* block */)a1;
- (void)clientSetPropertyWithKey:(id)a0 property:(id)a1;
- (void)clientSetSYNCPropertyWithKey:(id)a0 property:(id)a1 reply:(id /* block */)a2;
- (id)copyClientID;
- (void)reconnect;
- (void)registerNotificationForProperties:(id)a0;

@end
