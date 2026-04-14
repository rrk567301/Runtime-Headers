@class AFBBufferBuilder;

@interface TRIFBFactorMetadataKeyValueBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct FactorMetadataKeyValueBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void).cxx_destruct;
- (void)setKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setVal:(id)a0;

@end
