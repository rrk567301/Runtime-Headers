@class NSURL, NSMutableDictionary;

@interface SMPathsCache : NSObject

@property (retain) NSURL *cacheLocation;
@property (retain) NSMutableDictionary *persistentCache;
@property (retain) NSMutableDictionary *cache;

+ (void)deleteCacheForSystemRoot:(id)a0;

- (void).cxx_destruct;
- (id)initWithSystemRoot:(id)a0;
- (void)loadCacheFromDisk;
- (void)saveCaches;
- (id)cacheDataForKey:(id)a0;
- (void)setCacheData:(id)a0 forKey:(id)a1;
- (void)setCacheData:(id)a0 forKey:(id)a1 persistent:(BOOL)a2;

@end
