@class NSString;

@interface ASDBackgroundAssets : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)testFlightDownloadManifestRequestForStoreItemIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;


@end
