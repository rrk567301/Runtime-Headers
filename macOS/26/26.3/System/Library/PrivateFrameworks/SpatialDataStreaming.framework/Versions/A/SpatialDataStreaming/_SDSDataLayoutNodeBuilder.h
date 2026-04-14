@class AFBBufferBuilder;

@interface _SDSDataLayoutNodeBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutNodeBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFlattenedLayout:(id)a0;

@end
