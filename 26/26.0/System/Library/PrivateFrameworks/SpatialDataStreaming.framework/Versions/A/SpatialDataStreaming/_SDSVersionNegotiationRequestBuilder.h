@class AFBBufferBuilder;

@interface _SDSVersionNegotiationRequestBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct VersionNegotiationRequestBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setRange:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setConnectionId:(unsigned int)a0;
- (void)setSdsRange:(id)a0;

@end
