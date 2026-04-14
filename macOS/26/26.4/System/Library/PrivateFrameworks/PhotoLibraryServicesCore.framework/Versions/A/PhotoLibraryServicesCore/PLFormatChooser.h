@class NSArray, PLImageFormat, PLDeviceConfiguration;

@interface PLFormatChooser : NSObject {
    PLDeviceConfiguration *_deviceConfiguration;
    PLImageFormat *_posterThumbnailFormat;
}

@property (readonly, nonatomic) NSArray *supportedDerivativeFormats;
@property (readonly, nonatomic) PLImageFormat *fullScreenFormatForCurrentDevice;
@property (readonly, nonatomic) PLImageFormat *indexSheetUnbakedFormat;
@property (readonly, nonatomic) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *masterThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *portraitScrubberThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *landscapeScrubberThumbnailFormat;

+ (id)defaultFormatChooser;
+ (id)_suppportedFullSizeFormatIDs;
+ (struct CGSize { double x0; double x1; })_desiredImageSizeForRequestedViewSizeInPixels:(struct CGSize { double x0; double x1; })a0;

- (id)initWithDeviceConfiguration:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })posterThumbnailSize;
- (id)_derivativeFormatThatFitsSize:(struct CGSize { double x0; double x1; })a0;

@end
