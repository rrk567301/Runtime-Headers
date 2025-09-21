@interface DADiscoveryExtensionSession : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;

- (void)invalidate;
- (void)reportEvent:(id)a0;
- (void).cxx_destruct;

@end
