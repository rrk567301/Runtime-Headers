@class NSArray;

@interface _SnapshotCache : NSObject

@property (class, readonly, nonatomic) NSArray *URLs;

+ (void)removeWithURL:(id)a0 metadataMananger:(id)a1;
+ (id)snapshotsForURL;
+ (void)allocateWithURL:(id)a0;
+ (void)cancelRequestWithURL:(id)a0 metadataManager:(id)a1;
+ (id)snapshotWithURL:(id)a0;

@end
