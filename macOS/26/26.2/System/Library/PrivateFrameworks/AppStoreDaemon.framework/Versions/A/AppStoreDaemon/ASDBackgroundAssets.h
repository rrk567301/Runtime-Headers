@class NSString;

@interface ASDBackgroundAssets : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (void)didReachAssetPackTerminalPhaseForStoreItemIdentifier:(id)a0 bundleIdentifier:(id)a1 assetPackIdentifier:(id)a2 assetPackVersion:(id)a3 internalBeta:(BOOL)a4 terminalPhase:(long long)a5 error:(id)a6 completionHandler:(id /* block */)a7;
+ (id)testFlightDownloadManifestRequestForStoreItemIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;


@end
