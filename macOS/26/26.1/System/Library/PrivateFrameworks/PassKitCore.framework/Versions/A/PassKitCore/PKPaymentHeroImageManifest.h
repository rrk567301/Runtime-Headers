@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject

@property (readonly, nonatomic) NSDictionary *images;

+ (void)downloadManifestForRegion:(id)a0 url:(id)a1 fileDownloader:(id)a2 completion:(id /* block */)a3;
+ (void)removeManifestFileForRegion:(id)a0;
+ (void)saveManifestDataToDeviceForRegion:(id)a0 data:(id)a1;
+ (id)manifestForRegion:(id)a0;
+ (id)manifestFileForRegion:(id)a0 planningToWrite:(BOOL)a1;
+ (BOOL)manifestFileExistsForRegion:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
