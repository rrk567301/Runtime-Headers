@protocol RBDaemonContextProviding;

@interface RBRequestManager : NSObject <RBRequestManaging> {
    id<RBDaemonContextProviding> _daemonContext;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)executeLaunchRequest:(id)a0 euid:(unsigned int)a1 requestor:(id)a2 entitlements:(id)a3 completion:(id /* block */)a4;

@end
