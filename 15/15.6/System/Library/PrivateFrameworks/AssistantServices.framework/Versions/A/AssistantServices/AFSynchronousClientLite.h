@interface AFSynchronousClientLite : AFClientLite

- (void)_handleCommand:(id)a0 afterCurrentRequest:(char)a1 isOneWay:(char)a2 commandHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
