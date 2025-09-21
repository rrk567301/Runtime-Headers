@class NSString, PHFetchResult, PHPhotoLibrary;

@interface PNWidgetAssetsSuggester : NSObject

@property (readonly, nonatomic) PHFetchResult *assets;
@property (readonly, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)fetchSuggestionsWithOptions:(id)a0;
- (id)createSuggestions;
- (id)initWithAssets:(id)a0 photoLibrary:(id)a1 widgetIdentifier:(id)a2;
- (void)removePreviousSuggestions;
- (id)_predicateForFeaturedSuggestions;

@end
