@class AFBBufferBuilder;

@interface _SDSDataLayoutNodeBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutNodeBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setFlattenedLayout:(id)a0;

@end
