@interface AVB17221AEMRVFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property BOOL pullDown;
@property BOOL interlaced;
@property unsigned char colorspace;
@property unsigned char pixelDepth;
@property unsigned char pixelFormat;
@property unsigned char frameRate;
@property unsigned short activePixels;
@property unsigned short totalLines;

+ (id)keyPathsForValuesAffectingActivePixels;
+ (id)keyPathsForValuesAffectingColorspace;
+ (id)keyPathsForValuesAffectingFrameRate;
+ (id)keyPathsForValuesAffectingInterlaced;
+ (id)keyPathsForValuesAffectingPixelDepth;
+ (id)keyPathsForValuesAffectingPixelFormat;
+ (id)keyPathsForValuesAffectingPullDown;
+ (id)keyPathsForValuesAffectingTotalLines;

- (id)init;
- (BOOL)isSupportedFormat;
- (BOOL)isVideoFormat;

@end
