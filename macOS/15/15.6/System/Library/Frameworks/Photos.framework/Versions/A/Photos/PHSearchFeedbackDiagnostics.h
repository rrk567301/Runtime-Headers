@class NSDictionary, NSString;

@interface PHSearchFeedbackDiagnostics : NSObject <PLSearchIndexingContextDelegate>

@property (readonly, nonatomic) BOOL isSharedLibraryEnabled;
@property (readonly, copy, nonatomic) NSDictionary *queryResultJSON;
@property (readonly, copy, nonatomic) NSDictionary *indexStatusJSON;
@property (readonly, copy, nonatomic) NSDictionary *resultAttributesJSON;
@property (readonly, copy, nonatomic) NSDictionary *assetThumbnailPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)assertIfNotCorrectConfiguration;
+ (id)_diagnosticsFilename;
+ (id)collectDiagnosticsForLibrary:(id)a0 resultJSON:(id)a1 onScreenAssets:(id)a2 toPath:(id)a3;
+ (id)collectDiagnosticsForLibrary:(id)a0 toPath:(id)a1;
+ (id)jsonForSearchQueryResult:(id)a0;
+ (void)purgeSearchUIDiagnosticDetailsForPhotoLibrary:(id)a0 queue:(id)a1;
+ (id)saveDiagnostics:(id)a0 toPath:(id)a1;
+ (id)saveSearchUIDiagnosticDetails:(id)a0 photoLibrary:(id)a1 queue:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_deviceInfoJSON;
- (id)_assetThumbnailPathsForAssets:(id)a0 photoLibrary:(id)a1;
- (void)_collectPhotosAppOnScreenSearchDetailsWithHandler:(id /* block */)a0;
- (id)_fetchAssets:(id)a0 photoLibrary:(id)a1;
- (id)_indexSummaryJSONForPhotoLibrary:(id)a0;
- (id)_indexingContextForPhotoLibrary:(id)a0;
- (id)_jsonDateFormatter;
- (id)_resultAttributesJSONForAssets:(id)a0 photoLibrary:(id)a1;
- (id)_spotlightClientStateStatusForPhotoLibrary:(id)a0;
- (void)_writeJSONObject:(id)a0 toPath:(id)a1;
- (BOOL)_writeToPath:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 resultJSON:(id)a1 onScreenAssets:(id)a2;
- (id)initWithPhotoLibrary:(id)a0 resultJSON:(id)a1 onScreenAssets:(id)a2 startTime:(double)a3;
- (BOOL)isSharedLibraryEnabledForSearchIndexingContext:(id)a0;

@end
