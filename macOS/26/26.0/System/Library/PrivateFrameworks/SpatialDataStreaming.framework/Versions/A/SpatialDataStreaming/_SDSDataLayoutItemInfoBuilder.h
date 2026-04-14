@class AFBBufferBuilder;

@interface _SDSDataLayoutItemInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutItemInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setOptions:(unsigned int)a0;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void)setFieldName:(id)a0;
- (void).cxx_destruct;

@end
