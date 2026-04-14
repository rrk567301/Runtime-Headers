@interface BridgeXPCSynchronousListener : BridgeXPCListener

@property (copy, nonatomic) id /* block */ messageHandler;

- (void)activate;
- (void)setEventHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
