@class AFBBufferBuilder;

@interface _SDSSessionNextIncomingConnectionStreamNameAckBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct SessionNextIncomingConnectionStreamNameAckBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setName:(id)a0;

@end
