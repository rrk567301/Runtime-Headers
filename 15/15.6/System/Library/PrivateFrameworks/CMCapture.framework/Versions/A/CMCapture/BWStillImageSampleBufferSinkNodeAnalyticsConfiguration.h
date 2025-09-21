@interface BWStillImageSampleBufferSinkNodeAnalyticsConfiguration : NSObject

@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) float formatMaxFrameRate;
@property (nonatomic) char isHighQualityPhotoWithVideoFormatSupported;
@property (nonatomic) char isPhotoFormat;
@property (nonatomic) char isTimeLapse;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) char binned;
@property (nonatomic) char isSemanticStyleRenderingSupported;
@property (nonatomic) char isSmartStyleRenderingSupported;
@property (nonatomic) char fastCapturePrioritizationEnabled;

- (void)dealloc;

@end
