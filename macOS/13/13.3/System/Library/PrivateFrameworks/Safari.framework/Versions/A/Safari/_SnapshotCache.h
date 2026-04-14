@class NSArray;

@interface _SnapshotCache : NSObject

@property (class, readonly, nonatomic) NSArray *URLs;

+ (id)snapshotsForURL;
+ (void)removeWithURL:(id)a0 metadataMananger:(id)a1;
+ (void)allocateWithURL:(id)a0;
+ (void)cancelRequestWithURL:(id)a0 metadataManager:(id)a1;
+ (id)snapshotWithURL:(id)a0;

@end
