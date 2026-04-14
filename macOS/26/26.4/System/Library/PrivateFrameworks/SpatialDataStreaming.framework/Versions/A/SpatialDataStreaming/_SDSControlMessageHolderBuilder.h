@class AFBBufferBuilder;

@interface _SDSControlMessageHolderBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct ControlMessageHolderBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setMessageWithNamedStreamRequest:(id)a0;
- (void)setMessageWithNamedStreamResponse:(id)a0;
- (void)setMessageWithSessionNewStreamAck:(id)a0;
- (void)setMessageWithSessionNewStreamIntent:(id)a0;
- (void)setMessageWithSessionNextIncomingConnectionComplete:(id)a0;
- (void)setMessageWithSessionNextIncomingConnectionStreamName:(id)a0;
- (void)setMessageWithSessionNextIncomingConnectionStreamNameAck:(id)a0;
- (void)setMessageWithVersionNegotiationRequest:(id)a0;
- (void)setMessageWithVersionNegotiationResponse:(id)a0;

@end
