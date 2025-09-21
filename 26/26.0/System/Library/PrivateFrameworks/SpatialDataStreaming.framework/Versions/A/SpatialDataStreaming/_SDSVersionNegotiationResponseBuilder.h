@class AFBBufferBuilder;

@interface _SDSVersionNegotiationResponseBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct VersionNegotiationResponseBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setConnectionId:(unsigned int)a0;
- (void)setResolvedVersion:(id)a0;
- (void)setSdsResolvedVersion:(id)a0;

@end
