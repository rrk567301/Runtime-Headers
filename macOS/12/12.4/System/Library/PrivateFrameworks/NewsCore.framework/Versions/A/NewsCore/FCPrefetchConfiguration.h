@class NSDictionary, NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject {
    NTPBPrefetchConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=isBackgroundFetchEnabled) BOOL backgroundFetchEnabled;
@property (readonly, nonatomic) double minimumBackgroundFetchInterval;
@property (readonly, nonatomic) BOOL shouldPrefetchForYouFeed;
@property (readonly, nonatomic) unsigned long long maximumFavoritesFeedsToPrefetch;
@property (readonly, nonatomic) double prefetchedForYouExpiration;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithPBPrefetchConfig:(id)a0;

@end
