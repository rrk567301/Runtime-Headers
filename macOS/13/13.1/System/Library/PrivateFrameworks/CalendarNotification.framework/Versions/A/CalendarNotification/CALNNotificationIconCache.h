@class NSString, NSObject;
@protocol OS_dispatch_queue, CalIconProvider;

@interface CALNNotificationIconCache : NSObject <CALNIconCache>

@property (readonly, nonatomic) id<CalIconProvider> iconProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_pathForCachedIconWithIdentifier:(id)a0;
+ (id)_iconCacheDirectory;
+ (id)pathForCachedIconWithIdentifier:(id)a0;
+ (id)iconCacheDirectory;

- (void).cxx_destruct;
- (id)cachedIconPathForIconIdentifier:(id)a0;
- (id)iconIdentifierForCachedIconPath:(id)a0;
- (BOOL)addIconsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)removeIconWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)forceRemoveAllCachedIconsWithError:(id *)a0;
- (id)initWithIconProvider:(id)a0;
- (BOOL)_addIconWithIdentifier:(id)a0 toCacheAtPath:(id)a1;
- (BOOL)_createCacheDirectoryIfNeeded;

@end
