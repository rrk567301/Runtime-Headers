@interface PHImageRequestBehaviorSpec : NSObject

@property (nonatomic) long long choosingPolicy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) long long version;
@property (nonatomic) long long resizeMode;
@property (nonatomic, getter=isSynchronous) char synchronous;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic) char allowPlaceholder;
@property (nonatomic) char onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) char includeHDRGainMap;
@property (nonatomic) char includeHDRGainMapInIntermediateImage;
@property (nonatomic) char decodeAsHDR;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) double minimumTableThumbnailLongSide;
@property (nonatomic) char useLowMemoryMode;
@property (nonatomic) char useLimitedLibraryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) char cannotReturnSmallerImage;

+ (char)_shouldDecodeAsHDRBasedOnChoosingPolicy:(long long)a0 optionsPreferHDR:(char)a1 asset:(id)a2;
+ (char)_shouldLoadHDRGainMapBasedOnChoosingPolicy:(long long)a0 options:(id)a1 asset:(id)a2;
+ (id)contentEditingInputImageBehaviorSpecForBaseVersion:(long long)a0 isNetworkAccessAllowed:(char)a1 downloadIntent:(long long)a2 shouldUseRAWAsUnadjustedBase:(char)a3 asset:(id)a4;
+ (id)imageRequestBestBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)imageRequestInitialBehaviorSpecWithImageRequestOptions:(id)a0 asset:(id)a1;
+ (id)imageRequestIntermediateBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)livePhotoRequestBestBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)livePhotoRequestInitialBehaviorSpecWithLivePhotoRequestOptions:(id)a0 asset:(id)a1;
+ (unsigned long long)loadingOptionsFromLoadingMode:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)shortDescription;
- (char)shouldLoadImage;
- (char)isExplicitUserAction;
- (char)shouldLoadData;
- (char)shouldLoadDataOrURL;
- (char)shouldLoadURL;

@end
