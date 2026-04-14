@class GTServiceConnection, NSSet, NSMutableDictionary;

@interface GTMTLTelemetryServiceXPCProxy : NSObject <GTMTLTelemetryService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (unsigned long long)registerObserver:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)update:(id)a0;
- (void).cxx_destruct;
- (id)query:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
