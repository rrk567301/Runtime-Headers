@class AFBBufferBuilder;

@interface _SDSDataLayoutFieldInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutFieldInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setLayoutInfo:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSize:(unsigned long long)a0;
- (id)init;

@end
