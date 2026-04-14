@class AFBBufferBuilder;

@interface _CHSRelevanceCacheBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct RelevanceCacheBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setGroups:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)setArchivedObjects:(id)a0;

@end
