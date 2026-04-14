@class VCPMediaAnalysisService, NSObject;
@protocol PFParallaxLayoutConfiguration, OS_os_log;

@interface PGWallpaperSuggestionAssetGater : NSObject {
    unsigned long long _type;
    VCPMediaAnalysisService *_mediaAnalysisService;
    id<PFParallaxLayoutConfiguration> _deviceWallpaperLayoutConfiguration;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (class, readonly) unsigned long long currentWallpaperPropertiesVersion;

@property (nonatomic) BOOL coversTracks;

+ (id)assetFetchPropertySetsForGating;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 loggingConnection:(id)a1;
- (id)requestWallpaperPropertiesForAsset:(id)a0 error:(id *)a1;
- (BOOL)_gateAsset:(id)a0 wallpaperProperties:(id *)a1;
- (BOOL)gateAsset:(id)a0;
- (BOOL)gateAsset:(id)a0 passesFaceQuality:(BOOL *)a1;
- (BOOL)gateAsset:(id)a0 hasPetFace:(BOOL *)a1;
- (BOOL)_gateAsset:(id)a0 passesFaceQuality:(BOOL *)a1 hasPetFace:(BOOL *)a2;

@end
