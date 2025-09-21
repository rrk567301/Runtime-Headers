@class NSDate, NSString, TestTelemetry, NSMutableSet, NSURL, NSNumber, CacheDeleteVolume;

@interface AppCache : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *bundleIdentifiers;
@property (retain, nonatomic) NSMutableSet *groupContainerIdentifiers;
@property (readonly, nonatomic) CacheDeleteVolume *cdVol;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly) char isDataseparated;
@property (readonly) char isPlaceholder;
@property (readonly) char isPlugin;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *userManagedAssetsURL;
@property (retain, nonatomic) NSNumber *lastKnownCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownTmpSize;
@property (retain, nonatomic) NSNumber *lastKnownFreespace;
@property (retain, nonatomic) NSDate *lastUsed;
@property double timestamp;
@property (retain, nonatomic) TestTelemetry *telemetry;

+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 cacheDeleteVolume:(id)a6 isDataseparated:(char)a7 isPlaceholder:(char)a8 isPlugin:(char)a9 telemetry:(id)a10;
+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 isDataseparated:(char)a6 isPlaceholder:(char)a7 isPlugin:(char)a8 telemetry:(id)a9;
+ (void)enumerateAppCachesOnVolume:(id)a0 options:(int)a1 telemetry:(id)a2 block:(id /* block */)a3;
+ (void)enumerateGroupCachesOnVolume:(id)a0 block:(id /* block */)a1;
+ (void)enumerateWithContainerQuery:(id)a0 container_class:(unsigned long long)a1 options:(int)a2 telemetry:(id)a3 block:(id /* block */)a4;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (char)validate;
- (id)cachePath;
- (int)urgency;
- (char)moveCacheAside:(id)a0;
- (id)tmpPath;
- (void)addBundleRecord:(id)a0;
- (void)addBundleRecords:(id)a0;
- (unsigned long long)caches:(char)a0 purge:(char)a1;
- (unsigned long long)clearCaches:(char)a0;
- (id)initWithBundleRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 cacheDeleteVolume:(id)a6 isDataseparated:(char)a7 isPlaceholder:(char)a8 isPlugin:(char)a9 telemetry:(id)a10;
- (void)setLastUsedTime:(id)a0;
- (long long)three_days_ago;
- (unsigned long long)tmp:(char)a0 purge:(char)a1 all:(char)a2;

@end
