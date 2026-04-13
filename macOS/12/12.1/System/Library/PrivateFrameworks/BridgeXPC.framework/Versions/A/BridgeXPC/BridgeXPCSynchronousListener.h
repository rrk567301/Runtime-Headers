@interface BridgeXPCSynchronousListener : BridgeXPCListener

@property (copy, nonatomic) id /* block */ messageHandler;

- (void).cxx_destruct;
- (void)setEventHandler:(id /* block */)a0;
- (void)activate;

@end
