@class AFBBufferBuilder;

@interface _SDSNamedStreamRequestBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct NamedStreamRequestBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setConnectionId:(unsigned int)a0;
- (void)setDataLayoutList:(id)a0;
- (void)setMaxItemsPerMessage:(unsigned int)a0;

@end
