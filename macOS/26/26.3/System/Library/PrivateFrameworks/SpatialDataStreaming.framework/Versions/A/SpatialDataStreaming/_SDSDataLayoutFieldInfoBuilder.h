@class AFBBufferBuilder;

@interface _SDSDataLayoutFieldInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutFieldInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setLayoutInfo:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
