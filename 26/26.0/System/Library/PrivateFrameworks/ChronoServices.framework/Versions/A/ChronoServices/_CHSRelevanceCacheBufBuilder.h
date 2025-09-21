@class AFBBufferBuilder;

@interface _CHSRelevanceCacheBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct RelevanceCacheBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setGroups:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setArchivedObjects:(id)a0;

@end
