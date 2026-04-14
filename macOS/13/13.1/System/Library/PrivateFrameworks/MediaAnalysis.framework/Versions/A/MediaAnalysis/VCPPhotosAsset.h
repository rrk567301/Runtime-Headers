@class NSArray, NSDictionary, NSMutableDictionary, PHAsset;

@interface VCPPhotosAsset : VCPAsset {
    PHAsset *_asset;
    NSArray *_cachedResources;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
}

@property (readonly, nonatomic) NSArray *resources;

+ (id)assetWithPHAsset:(id)a0;

- (void).cxx_destruct;
- (double)duration;
- (id)modificationDate;
- (long long)mediaType;
- (id)faces;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)fingerprint;
- (id)localIdentifier;
- (id)scenes;
- (id)movie;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (id)allScenes;
- (id)exif;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (BOOL)isMovieResourceLocalAvailable;
- (id)originalMovie;
- (id)initWithPHAsset:(id)a0;
- (id)streamedMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;

@end
