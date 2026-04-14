@interface DRSPDServer : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;

- (void)activate;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)handleRequest:(id)a0;

@end
