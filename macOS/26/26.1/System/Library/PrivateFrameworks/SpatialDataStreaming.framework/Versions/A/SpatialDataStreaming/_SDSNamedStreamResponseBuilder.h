@class AFBBufferBuilder;

@interface _SDSNamedStreamResponseBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct NamedStreamResponseBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)setConnectionId:(unsigned int)a0;
- (void)setDataLayoutList:(id)a0;
- (void)setMaxItemsPerMessage:(unsigned int)a0;
- (void)setResolvedDataLayout:(id)a0;

@end
