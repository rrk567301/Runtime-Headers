@class NSDate, NSString, TestTelemetry, NSMutableSet, NSURL, NSNumber, CacheDeleteVolume;

@interface AppCache : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *bundleRecords;
@property (readonly, nonatomic) CacheDeleteVolume *cdVol;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly) BOOL isDataseparated;
@property (readonly) BOOL isPlaceholder;
@property (readonly) BOOL isPlugin;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *userManagedAssetsURL;
@property (retain, nonatomic) NSNumber *lastKnownCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownTmpSize;
@property (retain, nonatomic) NSNumber *lastKnownFreespace;
@property (retain, nonatomic) NSDate *lastUsed;
@property double timestamp;
@property (retain, nonatomic) TestTelemetry *telemetry;

+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 userManagedAssetsURL:(id)a3 personaUniqueString:(id)a4 cacheDeleteVolume:(id)a5 isDataseparated:(BOOL)a6 isPlaceholder:(BOOL)a7 isPlugin:(BOOL)a8 telemetry:(id)a9;
+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 userManagedAssetsURL:(id)a3 personaUniqueString:(id)a4 isDataseparated:(BOOL)a5 isPlaceholder:(BOOL)a6 isPlugin:(BOOL)a7 telemetry:(id)a8;
+ (void)enumerateAppCachesOnVolume:(id)a0 options:(int)a1 telemetry:(id)a2 block:(id /* block */)a3;
+ (void)enumerateGroupCachesOnVolume:(id)a0 block:(id /* block */)a1;
+ (void)enumerateWithContainerQuery:(id)a0 container_class:(unsigned long long)a1 options:(int)a2 telemetry:(id)a3 block:(id /* block */)a4;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)validate;
- (id)cachePath;
- (int)urgency;
- (BOOL)moveCacheAside:(id)a0;
- (id)tmpPath;
- (void)addBundleRecord:(id)a0;
- (void)addBundleRecords:(id)a0;
- (unsigned long long)caches:(BOOL)a0 purge:(BOOL)a1;
- (unsigned long long)clearCaches:(BOOL)a0;
- (unsigned long long)groupCache:(BOOL)a0;
- (id)initWithBundleRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 userManagedAssetsURL:(id)a3 personaUniqueString:(id)a4 cacheDeleteVolume:(id)a5 isDataseparated:(BOOL)a6 isPlaceholder:(BOOL)a7 isPlugin:(BOOL)a8 telemetry:(id)a9;
- (long long)three_days_ago;
- (unsigned long long)tmp:(BOOL)a0 purge:(BOOL)a1 all:(BOOL)a2;

@end
