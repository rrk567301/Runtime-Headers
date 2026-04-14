@class GTServiceConnection, NSSet;

@interface GTMTLDiagnosticsServiceXPCProxy : NSObject <GTMTLDiagnosticsService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
