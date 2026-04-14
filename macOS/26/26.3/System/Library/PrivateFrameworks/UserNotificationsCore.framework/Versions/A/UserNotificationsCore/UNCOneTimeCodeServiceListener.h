@class NSString, NSMutableArray, NSXPCListener;

@interface UNCOneTimeCodeServiceListener : NSObject <NSXPCListenerDelegate, UNOneTimeCodeServerProtocol> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activate;
- (void)consumeCode:(id)a0;
- (void)detectedOneTimeCodes:(id)a0;
- (void)registerForUpdates;
- (BOOL)_connectionIsAllowedToObserveOTC:(id)a0;

@end
