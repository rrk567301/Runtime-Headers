@class _TtC8MapsSync19MapsSyncStoreConfig;

@interface MapsSync.MapsSyncStoreConfig : NSObject

@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncStoreConfig *defaultStoreConfig;

@property (nonatomic, readonly) long long primary;
@property (nonatomic, readonly) long long cache;

+ (id)withConfigWithPrimary:(long long)a0 cache:(long long)a1;

- (id)init;

@end
