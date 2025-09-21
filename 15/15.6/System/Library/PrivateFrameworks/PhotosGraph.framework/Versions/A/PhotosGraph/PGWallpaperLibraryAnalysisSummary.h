@interface PGWallpaperLibraryAnalysisSummary : NSObject

@property (readonly, nonatomic) double ratioOfAssetsAtOrAboveSceneAnalysisVersion;
@property (readonly, nonatomic) double ratioOfAssetsAtOrAboveFaceAnalysisVersion;
@property (readonly, nonatomic) char libraryIsProcessedEnough;
@property (readonly, nonatomic) char libraryIsEmpty;

- (id)initWithPhotoLibrary:(id)a0;

@end
