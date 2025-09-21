@class NSMutableDictionary, NSDictionary, NSURL, AVURLAsset;

@interface VCPURLAsset : VCPAsset {
    NSURL *_imageURL;
    AVURLAsset *_movie;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    char _onceExif;
    NSDictionary *_cachedExif;
    char _onceScenes;
    NSMutableDictionary *_cachedScenes;
}

+ (id)imageAssetWithURL:(id)a0;
+ (id)livePhotoAssetWithImageURL:(id)a0 andMovieURL:(id)a1;
+ (id)movieAssetWithURL:(id)a0;
+ (id)sdofImageAssetWithURL:(id)a0;

- (void).cxx_destruct;
- (double)duration;
- (id)modificationDate;
- (long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)scenes;
- (id)movie;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (id)exif;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (id)initWithImageURL:(id)a0 andMovieURL:(id)a1;
- (id)initWithImageURL:(id)a0 isSDOF:(char)a1;
- (id)initWithMovieURL:(id)a0;
- (char)isMovieResourceLocalAvailable;
- (id)originalMovie;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (float)slowmoRate;

@end
