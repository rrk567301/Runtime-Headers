@class AFBBufferBuilder;

@interface _SDSNamedStreamRequestBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct NamedStreamRequestBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)setConnectionId:(unsigned int)a0;
- (void)setDataLayoutList:(id)a0;
- (void)setMaxItemsPerMessage:(unsigned int)a0;

@end
