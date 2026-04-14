@class NSArray, NSMutableDictionary;

@interface _SnapshotCache : NSObject {
    NSMutableDictionary *_snapshotsForURL;
}

@property (readonly, nonatomic) NSArray *URLs;

+ (id)snapshotCacheForProfileIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)snapshotsForURL;
- (void)removeWithURL:(id)a0 metadataMananger:(id)a1;
- (void)allocateWithURL:(id)a0;
- (void)cancelRequestWithURL:(id)a0 metadataManager:(id)a1;
- (id)snapshotWithURL:(id)a0;

@end
