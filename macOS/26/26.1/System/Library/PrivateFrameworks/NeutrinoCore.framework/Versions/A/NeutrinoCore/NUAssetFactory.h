@interface NUAssetFactory : NSObject

+ (id)imageAssetFromURL:(id)a0 options:(id)a1 error:(out id *)a2;
+ (id)imageAssetWithCGImage:(struct CGImage { } *)a0 type:(long long)a1 options:(id)a2 error:(out id *)a3;
+ (id)imageAssetWithCIImage:(id)a0 type:(long long)a1 options:(id)a2 error:(out id *)a3;
+ (id)imageAssetWithCVPixelBuffer:(struct __CVBuffer { } *)a0 type:(long long)a1 options:(id)a2 error:(out id *)a3;
+ (id)imageAssetWithIOSurface:(id)a0 type:(long long)a1 options:(id)a2 error:(out id *)a3;
+ (id)livePhotoAssetFromImageURL:(id)a0 videoURL:(id)a1 options:(id)a2 error:(out id *)a3;
+ (id)videoAssetFromURL:(id)a0 options:(id)a1 error:(out id *)a2;

@end
