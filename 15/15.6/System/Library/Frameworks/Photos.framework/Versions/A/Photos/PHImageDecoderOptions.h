@interface PHImageDecoderOptions : NSObject

@property (nonatomic) char shouldLoadGainMap;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic) char optimizeForDrawing;
@property (nonatomic) char highPriority;
@property (nonatomic) char waitUntilComplete;
@property (nonatomic) char allowFallbackDecoder;
@property (nonatomic) char preferSWDecode;
@property (nonatomic) char useLowMemoryMode;
@property (nonatomic) char decodeAsHDR;
@property (nonatomic) float targetHDRHeadroom;
@property (nonatomic) float hdrGain;
@property (readonly, nonatomic) long long maximumLongSideLength;
@property (readonly, nonatomic) char shouldCrop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
