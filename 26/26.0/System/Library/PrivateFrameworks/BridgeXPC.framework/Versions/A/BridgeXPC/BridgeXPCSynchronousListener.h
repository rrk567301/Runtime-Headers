@interface BridgeXPCSynchronousListener : BridgeXPCListener

@property (copy, nonatomic) id /* block */ messageHandler;

- (void)setEventHandler:(id /* block */)a0;
- (void)activate;
- (void).cxx_destruct;

@end
