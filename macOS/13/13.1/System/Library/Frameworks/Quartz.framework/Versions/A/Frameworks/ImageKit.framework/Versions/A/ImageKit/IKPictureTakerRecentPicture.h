@class NSString, NSDictionary, NSData, NSImage, IKImageWrapper;

@interface IKPictureTakerRecentPicture : NSObject {
    NSDictionary *_cropInfo;
    struct CGSize { double width; double height; } _cropSize;
    IKImageWrapper *_originalImage;
    NSData *_smallIconData;
    NSImage *_smallIconCache;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crop;
    int _version;
    double _timeValue;
    void *_userInfo;
}

@property (retain) NSString *originalImageName;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL isABMeImage;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isForHUD;
@property (nonatomic) BOOL isCurrent;

+ (double)defaultThumbnailSize;
+ (id)defaultRecentPictureWithImageWrapper:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (id)defaultRecentPictureWithOriginalImage:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (id)defaultRecentPictureWithOriginalData:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (id)recentPicturePlaceholderForHUD:(BOOL)a0;
+ (id)emptyRecentPictureWithIcon:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void *)userInfo;
- (id)infoDictionary;
- (int)version;
- (void)setUserInfo:(void *)a0;
- (id)imageRepresentation;
- (double)timeValue;
- (void)setTimeValue:(double)a0;
- (id)imageUID;
- (id)imageRepresentationType;
- (id)smallIcon;
- (id)originalImage;
- (struct CGSize { double x0; double x1; })cropSize;
- (void)setCropSize:(struct CGSize { double x0; double x1; })a0;
- (id)cropInfo;
- (id)initWithOriginalImage:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1 cropInfo:(id)a2 smallIcon:(id)a3;
- (id)editedImage;
- (void)setCropInfo:(id)a0 smallIcon:(id)a1;
- (BOOL)hasSameThumbnailAsRecentPicture:(id)a0;
- (void)upgradeForCropSize:(struct CGSize { double x0; double x1; })a0;

@end
