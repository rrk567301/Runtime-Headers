@interface TVISSnapshotLogger : NSObject

+ (id)_cachesSnapshot;
+ (void)runWithContext:(id)a0;
+ (id)_formattedDate:(id)a0;
+ (id)_snapshotAttributesWithContext:(id)a0;
+ (id)_currentSnapshotWithContext:(id)a0;
+ (id)_customerCacheURL;
+ (id)_remoteResourcesSnapshot;
+ (id)_snapshotCacheDirectoryURL;
+ (id)_userDefaultsSnapshot;

@end
