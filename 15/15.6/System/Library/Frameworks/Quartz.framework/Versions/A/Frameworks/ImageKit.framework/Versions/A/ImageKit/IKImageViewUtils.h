@interface IKImageViewUtils : NSObject

+ (long long)exifForRotationDegree:(double)a0 fromExif:(long long)a1;
+ (id)_commonOptionsForImageFromSource:(id)a0 wantsEDR:(char)a1;
+ (char)_imageHasAppropriateAttachedThumbnail:(struct CGImageSource { } *)a0 imageWidth:(double)a1 imageHeight:(double)a2 scale:(double)a3 outBestMaxDimension:(double *)a4;
+ (struct CGImage { } *)_newPossiblySubsampledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 wantsEDR:(char)a3 displayProperties:(id)a4;
+ (struct CGImage { } *)_newScaledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 wantsEDR:(char)a3 canUseExistingThumbnail:(char)a4 displayProperties:(id)a5;
+ (long long)exifForFlip:(int)a0 fromExif:(long long)a1;
+ (int)flipTypeForExif:(long long)a0;
+ (char)imageTypeSupportsSubsampling:(struct __CFString { } *)a0;
+ (struct CGImage { } *)newCGImageFromImgSrc:(struct CGImageSource { } *)a0 index:(long long)a1 displayProperties:(id)a2 imageScale:(double)a3 forceScale:(char)a4 wantsEDR:(char)a5 canUseExistingThumbnail:(char)a6 createBitmapImmediately:(char)a7;
+ (double)normalizedRotationDegree:(double)a0;
+ (double)rotationDegreeForExif:(long long)a0;

@end
