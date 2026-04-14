@class AFBBufferBuilder;

@interface _SDSDataLayoutSublayoutInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutSublayoutInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setSubLayoutNestedName:(id)a0;

@end
