@interface IKImageViewUtils : NSObject

+ (double)normalizedRotationDegree:(double)a0;
+ (long long)exifForRotationDegree:(double)a0 fromExif:(long long)a1;
+ (long long)exifForFlip:(int)a0 fromExif:(long long)a1;
+ (double)rotationDegreeForExif:(long long)a0;
+ (int)flipTypeForExif:(long long)a0;
+ (BOOL)imageTypeSupportsSubsampling:(struct __CFString { } *)a0;
+ (struct CGImage { } *)newCGImageFromImgSrc:(struct CGImageSource { } *)a0 index:(long long)a1 displayProperties:(id)a2 imageScale:(double)a3 forceScale:(BOOL)a4 canUseExistingThumbnail:(BOOL)a5 createBitmapImmediately:(BOOL)a6;
+ (struct CGImage { } *)_newScaledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 canUseExistingThumbnail:(BOOL)a3 displayProperties:(id)a4;
+ (BOOL)_imageHasAppropriateAttachedThumbnail:(struct CGImageSource { } *)a0 imageWidth:(double)a1 imageHeight:(double)a2 scale:(double)a3 outBestMaxDimension:(double *)a4;
+ (struct CGImage { } *)_newPossiblySubsampledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 displayProperties:(id)a3;
+ (id)_commonOptionsForImageFromSource:(id)a0;

@end
