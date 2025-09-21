@class AFBBufferBuilder;

@interface _SDSDataLayoutSublayoutInfoBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutSublayoutInfoBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setLayoutInfo:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setSubLayoutNestedName:(id)a0;

@end
