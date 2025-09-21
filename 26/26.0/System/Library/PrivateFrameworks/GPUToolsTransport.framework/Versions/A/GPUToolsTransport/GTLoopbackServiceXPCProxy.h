@class GTServiceConnection, NSSet;

@interface GTLoopbackServiceXPCProxy : NSObject <GTLoopbackService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (id)echo:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)echo:(id)a0 completionHandler:(id /* block */)a1;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2 complete:(id /* block */)a3;

@end
