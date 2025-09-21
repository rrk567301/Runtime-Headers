@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject

@property (retain, nonatomic) PLImageFormat *backingImageFormat;
@property (nonatomic) unsigned long long backingCPLResourceType;
@property (readonly, nonatomic, getter=isVideo) char video;
@property (readonly, nonatomic, getter=isCroppedToSquare) char croppedToSquare;
@property (readonly, nonatomic, getter=isTable) char table;
@property (readonly, nonatomic, getter=isThumbnail) char thumbnail;
@property (readonly, nonatomic) long long thumbnailKind;
@property (readonly, nonatomic) unsigned long long metalPixelFormat;
@property (readonly, nonatomic) struct __CFString { } *colorSpaceName;
@property (readonly, nonatomic) unsigned long long maxSideLengthIfSquare;
@property (readonly, nonatomic) unsigned long long maxNumberOfPixelsIfSquare;

+ (id)_thumbnailAssetResourceQualityClassesForCurrentDeviceInLibrary:(id)a0;
+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)allQualityClassesMatchingPredicate:(id)a0 inLibrary:(id)a1;
+ (id)anyQualityClassMatchingPredicate:(id)a0 inLibrary:(id)a1;
+ (id)assetResourceQualityClassesInLibrary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)_compare:(id)a0;
- (id)initWithCPLResourceType:(unsigned long long)a0;
- (id)initWithThumbnailFormat:(id)a0;
- (void)preheatDataForThumbnailIndexes:(id)a0 inLibrary:(id)a1;
- (id)tableThumbnailDataForAsset:(id)a0 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x0; int x1; int x2; int x3; int x4; int x5; long long x6; } *)a1;
- (id)tableThumbnailEntriesAtIndexes:(id)a0 inLibrary:(id)a1;

@end
