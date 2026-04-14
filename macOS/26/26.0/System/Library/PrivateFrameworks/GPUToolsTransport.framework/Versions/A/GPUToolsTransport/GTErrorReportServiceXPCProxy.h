@class GTServiceConnection, NSSet, NSMutableDictionary;

@interface GTErrorReportServiceXPCProxy : NSObject <GTErrorReportService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (unsigned long long)registerObserver:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)fetchRejectedConnections:(id /* block */)a0;
- (id)returnRejectedConnections:(id *)a0;

@end
