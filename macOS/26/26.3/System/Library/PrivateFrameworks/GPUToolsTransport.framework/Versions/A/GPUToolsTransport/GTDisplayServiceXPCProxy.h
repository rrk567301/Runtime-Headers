@class GTServiceConnection, NSSet;

@interface GTDisplayServiceXPCProxy : NSObject <GTDisplayService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)terminateProcess;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)show:(id)a0 completionHandler:(id /* block */)a1;
- (id)update:(id)a0 completionHandler:(id /* block */)a1;

@end
