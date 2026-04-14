@class NSXPCListener, NSString, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface REAudioPlaybackHostingService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    unsigned long long _connectionIdentifierCounter;
}

@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (copy) id /* block */ didConnectBlock;
@property (copy) id /* block */ didDisconnectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (unsigned long long)clientCount;
- (void).cxx_destruct;
- (void)connectionIdentifier:(unsigned long long)a0 streamToken:(unsigned long long)a1 didChangeFromState:(unsigned long long)a2 toState:(unsigned long long)a3;
- (void)connectionIdentifierLostMediaServices:(unsigned long long)a0;
- (void)connectionIdentifierResetMediaServices:(unsigned long long)a0;

@end
