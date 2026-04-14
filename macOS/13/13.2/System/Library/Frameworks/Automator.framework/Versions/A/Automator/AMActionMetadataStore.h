@class NSURL, NSMutableDictionary;

@interface AMActionMetadataStore : NSObject

@property (retain) NSURL *cacheFileURL;
@property (retain) NSMutableDictionary *actionMetadataByBundleIdentifier;
@property BOOL cacheDataIsDirty;

+ (id)actionMetadataCacheFileURL;

- (void).cxx_destruct;
- (void)writeUpdatedStoreFileIfNeeded;
- (void)_removeDeadEntries;
- (void)_loadCacheFileData;
- (id)initWithCacheFileURL:(id)a0;
- (id)valueForKey:(id)a0 forActionWithBundleIdentifier:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 forActionWithBundleIdentifier:(id)a2;

@end
