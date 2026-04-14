@interface SASProximitySessionTransport : NSObject

@property (copy) id /* block */ receivedDataBlock;

- (void)activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)sendData:(id)a0 response:(id /* block */)a1;

@end
