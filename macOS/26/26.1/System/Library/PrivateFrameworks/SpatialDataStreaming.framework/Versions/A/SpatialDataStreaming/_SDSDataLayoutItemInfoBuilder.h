@class AFBBufferBuilder;

@interface _SDSDataLayoutItemInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutItemInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setFieldName:(id)a0;
- (void)setOptions:(unsigned int)a0;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
