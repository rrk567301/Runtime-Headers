@class NSString;

@interface FASettingPresetsCache : NSObject <FASettingPresetsCacheProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheQueue;

- (id)invalidate;
- (id)_cacheDirectoryURLWithError:(id *)a0;
- (id)_cacheURLWithStoreFront:(id)a0 version:(id)a1;
- (id)_cacheURLWithStoreFront:(id)a0 version:(id)a1 error:(id *)a2;
- (id)_createCacheFileWithStoreFront:(id)a0 version:(id)a1;
- (id)_fetchDataWithStoreFront:(id)a0 version:(id)a1 error:(id *)a2;
- (id)loadForURL:(id)a0 storeFront:(id)a1 version:(id)a2;
- (id)loadWithStoreFront:(id)a0 version:(id)a1 error:(id *)a2;
- (id)updateWithPresets:(id)a0 requestURL:(id)a1 storeFront:(id)a2 version:(id)a3;

@end
