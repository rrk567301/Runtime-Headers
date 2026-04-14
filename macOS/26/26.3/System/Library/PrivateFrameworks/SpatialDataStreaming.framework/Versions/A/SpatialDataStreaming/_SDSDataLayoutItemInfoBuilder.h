@class AFBBufferBuilder;

@interface _SDSDataLayoutItemInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutItemInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setOffset:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFieldName:(id)a0;
- (void)setOptions:(unsigned int)a0;

@end
