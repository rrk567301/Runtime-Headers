@class AFBBufferBuilder;

@interface _SDSDataLayoutNodeBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutNodeBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setFlattenedLayout:(id)a0;

@end
