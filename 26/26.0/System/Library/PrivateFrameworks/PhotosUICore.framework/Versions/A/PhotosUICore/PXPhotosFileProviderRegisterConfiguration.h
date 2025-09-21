@class NSString, NSNumber;

@interface PXPhotosFileProviderRegisterConfiguration : NSObject {
    void /* unknown type, empty encoding */ livePhotoContentType;
    void /* unknown type, empty encoding */ autoLoopAsGIFContentType;
    void /* unknown type, empty encoding */ liveWallpaperContentType;
    void /* unknown type, empty encoding */ spatialWallpaperContentType;
    void /* unknown type, empty encoding */ thumbnailLowContentType;
    void /* unknown type, empty encoding */ thumbnailStandardContentType;
    void /* unknown type, empty encoding */ mailMovieExportContentType;
}

@property (class, nonatomic, readonly) NSString *typeIdentifierLivePhotoBundlePrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierAutoLoopAsGIFPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierLiveWallpaperPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierSpatialWallpaperPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierThumbnailLowPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierThumbnailStandardPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierMailMovieExportPrivate;

@property (nonatomic, readonly) long long usage;
@property (nonatomic) long long userEncodingPolicy;
@property (nonatomic) long long clientEncodingPolicy;
@property (nonatomic) BOOL shouldIncludeLocation;
@property (nonatomic) BOOL shouldIncludeCaption;
@property (nonatomic, retain) NSNumber *downscalingTargetDimension;
@property (nonatomic) BOOL isLiveWallpaperSelection;
@property (nonatomic) BOOL isSpatialWallpaperSelection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUsage:(long long)a0;

@end
