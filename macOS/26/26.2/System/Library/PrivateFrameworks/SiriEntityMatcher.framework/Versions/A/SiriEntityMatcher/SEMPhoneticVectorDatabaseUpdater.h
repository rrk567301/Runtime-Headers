@interface SEMPhoneticVectorDatabaseUpdater : SEMVectorDatabaseUpdater

+ (void)initialize;
+ (id)indexName;
+ (id)indexDirectory:(id)a0;
+ (unsigned char)supportedDevicePlatformForSet:(id)a0;
+ (id)updaterForIndexSite:(id)a0 localization:(id)a1;

- (id)initWithIndexSite:(id)a0 writer:(id)a1 localization:(id)a2;

@end
