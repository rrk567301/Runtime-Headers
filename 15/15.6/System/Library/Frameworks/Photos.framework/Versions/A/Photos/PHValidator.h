@interface PHValidator : NSObject

+ (char)isSupportedAudioAtPath:(id)a0;
+ (char)isSupportedImageAtPath:(id)a0;
+ (char)isSupportedMovieAtPath:(id)a0;
+ (unsigned char)mediaTypeForContentType:(id)a0;
+ (unsigned char)mediaTypeForURL:(id)a0;

- (char)validateData:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (char)validateURLs:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (char)_validateImageSource:(struct CGImageSource { } *)a0 error:(id *)a1;
- (char)_validateLivePhotoResourceURLs:(id)a0 videoComplementMetadata:(id)a1 error:(id *)a2;
- (char)_validateVideoURL:(id)a0 error:(id *)a1;
- (void)getLivePhotoImageMetadataFromURL:(id)a0 pairingIdentifier:(id *)a1;
- (char)getLivePhotoVideoMetadataFromURL:(id)a0 videoComplementMetadata:(id)a1 pairingIdentifier:(id *)a2 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4 error:(id *)a5;
- (char)isValidImagePathExtension:(id)a0;
- (char)isValidVideoPathExtension:(id)a0;
- (char)validateURL:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (char)validateURLs:(id)a0 withOptions:(unsigned long long)a1 videoComplementMetadata:(id)a2 error:(id *)a3;

@end
