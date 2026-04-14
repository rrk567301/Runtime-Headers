@class AFBBufferBuilder;

@interface _SDSDataLayoutFieldInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutFieldInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setSize:(unsigned long long)a0;
- (void)setLayoutInfo:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
