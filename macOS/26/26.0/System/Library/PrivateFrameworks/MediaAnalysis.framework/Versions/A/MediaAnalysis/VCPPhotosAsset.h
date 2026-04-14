@class NSArray, NSDictionary, NSMutableDictionary, PHAsset, NSData;

@interface VCPPhotosAsset : VCPAsset {
    PHAsset *_asset;
    NSArray *_cachedResources;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
    NSData *_downloadedData;
}

@property (readonly, nonatomic) NSArray *resources;

+ (id)assetWithPHAsset:(id)a0;
+ (id)assetWithPHAsset:(id)a0 downloadedData:(id)a1;

- (id)scenes;
- (unsigned long long)pixelWidth;
- (unsigned long long)pixelHeight;
- (id)faces;
- (id)modificationDate;
- (long long)mediaType;
- (double)duration;
- (void).cxx_destruct;
- (id)localIdentifier;
- (id)movie;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (id)allScenes;
- (id)initWithPHAsset:(id)a0 downloadedData:(id)a1;
- (id)exif;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (BOOL)isMovieResourceLocalAvailable;
- (BOOL)isShortMovie;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (float)slowmoRate;
- (id)streamedMovie:(BOOL)a0;

@end
