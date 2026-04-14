@class NSString, NSMutableArray, NSXPCListener;

@interface UNCOneTimeCodeServiceListener : NSObject <NSXPCListenerDelegate, UNOneTimeCodeServerProtocol> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (void).cxx_destruct;
- (id)_currentConnection;
- (id)init;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)consumeCode:(id)a0;
- (void)detectedOneTimeCodes:(id)a0;
- (void)registerForUpdates;
- (BOOL)_connectionIsAllowedToObserveOTC:(id)a0;

@end
