@interface VideoUtil : NSObject

+ (long long)videoResolutionForWidth:(int)a0 height:(int)a1;
+ (struct CGSize { double x0; double x1; })sizeForVideoResolution:(long long)a0;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize { double x0; double x1; })a0 toSizeB:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })compute16AlignedResolutionForNativeWidth:(unsigned int)a0 nativeHeight:(unsigned int)a1 maxScreenPixelCount:(unsigned long long)a2 maxScreenEncodingSizeSupported:(unsigned long long)a3;
+ (struct CGSize { double x0; double x1; })computeResolutionForMainDisplayWithMaxScreenPixelCount:(unsigned long long)a0;
+ (id)convertPixelBuffer:(struct __CVBuffer { } *)a0 toImageType:(int)a1 withAssetIdentifier:(id)a2 cameraStatusBits:(unsigned char)a3 allowTimeMetaData:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isBufferDescriptionForMultiImageStream:(id)a0;
+ (struct CGSize { double x0; double x1; })lowPowerModeEncodingResolutionForMaxResolution:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })maxCaptureEncodingResolutionForStreamConfigResolution:(long long)a0 lowPowerModeEnabled:(BOOL)a1;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)a0 width:(double)a1 height:(double)a2;
+ (int)stereoVideoPackingTypeForCMPackingType:(unsigned long long)a0;
+ (int)stereoVideoPackingTypeFromVideoBufferDescription:(id)a0;
+ (struct __CFString { } *)typeIdentifierForImageType:(int)a0;
+ (unsigned int)videoCodecForPayload:(int)a0;
+ (int)videoOrientationFromVideoOrientationMessage:(int)a0;
+ (int)videoOrientationMessageFromVideoOrientation:(int)a0;

@end
