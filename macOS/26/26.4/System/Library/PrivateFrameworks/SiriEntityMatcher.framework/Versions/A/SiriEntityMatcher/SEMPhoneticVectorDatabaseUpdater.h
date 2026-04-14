@interface SEMPhoneticVectorDatabaseUpdater : SEMVectorDatabaseUpdater

+ (id)indexDirectory:(id)a0;
+ (void)initialize;
+ (id)indexName;
+ (unsigned char)supportedDevicePlatformForSet:(id)a0;
+ (id)updaterForIndexSite:(id)a0 localization:(id)a1;

- (id)initWithIndexSite:(id)a0 writer:(id)a1 localization:(id)a2;

@end
