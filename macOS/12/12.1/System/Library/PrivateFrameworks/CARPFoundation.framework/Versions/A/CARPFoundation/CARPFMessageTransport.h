@protocol CARPFMessageTransportDelegate;

@interface CARPFMessageTransport : CARPFObject

@property (weak) id<CARPFMessageTransportDelegate> delegate;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
