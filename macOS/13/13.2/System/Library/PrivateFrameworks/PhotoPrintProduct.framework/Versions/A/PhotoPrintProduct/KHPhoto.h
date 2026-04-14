@class NSDate, NSString, NSArray, NSURL, CLPlacemark, NSValue, NSDictionary, KHPhotoLocationMetadata;
@protocol MapPointOfInterestProtocol, KHEventInfoProtocol, NSCopying;

@interface KHPhoto : NSObject <KHPhotoInfoProtocol> {
    struct CGSize { double width; double height; } _imagePixelSize;
    NSValue *_imageLocation;
    CLPlacemark *_placemark;
}

@property (retain, nonatomic) KHPhotoLocationMetadata *locationMetadata;
@property (retain, nonatomic) CLPlacemark *placemark;
@property (nonatomic) unsigned long long imageOrientation;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) id rawAsset;
@property (readonly) NSString *pageLayoutPhotoID;
@property (readonly) id<NSCopying> pageLayoutPhotoAddress;
@property (readonly) struct CGSize { double x0; double x1; } pageLayoutImageSize;
@property (readonly) double pageLayoutImageAspectRatio;
@property (readonly) unsigned long long pageLayoutOrientation;
@property (readonly) NSDate *pageLayoutPhotoDate;
@property (readonly) NSDate *pageLayoutPhotoModificationDate;
@property (readonly) NSArray *pageLayoutKeywordInfos;
@property (readonly) NSString *pageLayoutFilename;
@property (readonly) NSString *pageLayoutAnnotation;
@property (readonly) NSString *pageLayoutTitle;
@property (readonly) double pageLayoutNormalizedRating;
@property (readonly) NSDictionary *pageLayoutExifMetaData;
@property (readonly) id<MapPointOfInterestProtocol> pageLayoutLocationMetaData;
@property (readonly) NSArray *pageLayoutFaceInfos;
@property (readonly) NSString *pageLayoutEventID;
@property (readonly) id<KHEventInfoProtocol> pageLayoutEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageLoadingQueue;
+ (id)photoWithFileURL:(id)a0;
+ (id)photoWithItemProvider:(id)a0 extensionContext:(id)a1 extensionItem:(id)a2;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (BOOL)pageLayoutImageExists;
- (id)pageLayoutImage;
- (id)pageLayoutThumbnailImage;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)loadPageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)cancelPageLayoutImageLoadingRequestWithIdentifier:(id)a0;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1 withObserverTarget:(id)a2 selector:(SEL)a3 object:(id)a4;
- (void)cancelPageLayoutImageWithObserverTarget:(id)a0;
- (BOOL)pageLayoutImageExistsSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pageLayoutImageValid;
- (BOOL)pageLayoutImageValidSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pageLayoutImageHasRedEyeAdjustments;
- (BOOL)pageLayoutImageHasColorAdjustments;
- (BOOL)pageLayoutImageHasBorderEffects;
- (BOOL)pageLayoutImageHasLightAdjustments;
- (id)pageLayoutLocation;
- (void)pageLayoutEncodeWithDictionary:(id)a0;
- (id)initWithItemProvider:(id)a0 extensionContext:(id)a1 extensionItem:(id)a2;
- (id)pageLayoutRating;
- (id)_asyncLoadingMapTable;
- (id)pageLayoutImageWithObserverTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)pageLayoutPhotoId;

@end
