@interface SASProximitySessionTransport : NSObject

@property (copy) id /* block */ receivedDataBlock;

- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)sendData:(id)a0 response:(id /* block */)a1;

@end
