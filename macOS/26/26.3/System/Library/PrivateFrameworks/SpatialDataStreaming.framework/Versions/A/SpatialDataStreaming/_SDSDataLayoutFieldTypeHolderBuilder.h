@class AFBBufferBuilder;

@interface _SDSDataLayoutFieldTypeHolderBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutFieldTypeHolderBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFieldTypeWithDataLayoutFieldInfo:(id)a0;
- (void)setFieldTypeWithDataLayoutSublayoutInfo:(id)a0;

@end
