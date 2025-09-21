@class PHFetchResult, NSString, NSDictionary, NSURL, NSDate, VCPFingerprint, NSArray;

@interface VCPAsset : NSObject

@property (readonly, nonatomic) char isPano;
@property (readonly, nonatomic) char isLivePhoto;
@property (readonly, nonatomic) char isScreenshot;
@property (readonly, nonatomic) char isHDR;
@property (readonly, nonatomic) char isSDOF;
@property (readonly, nonatomic) NSDictionary *exif;
@property (readonly, nonatomic) char hadFlash;
@property (readonly, nonatomic) float exposureTimeSeconds;
@property (readonly, nonatomic) float photoOffsetSeconds;
@property (readonly, nonatomic) float originalPhotoOffsetSeconds;
@property (readonly, nonatomic) char isSlowmo;
@property (readonly, nonatomic) char isTimelapse;
@property (readonly, nonatomic) char isShortMovie;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float slowmoRate;
@property (readonly, nonatomic) float timelapseRate;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slomoRange;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) VCPFingerprint *fingerprint;
@property (readonly, nonatomic) char isImage;
@property (readonly, nonatomic) char isMovie;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSURL *mainFileURL;
@property (readonly, nonatomic) NSArray *allScenes;
@property (readonly, nonatomic) NSDictionary *scenes;
@property (readonly, nonatomic) PHFetchResult *faces;

+ (void)unimplementedExceptionForMethodName:(id)a0;

- (id)typeDescription;
- (id)movie;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (char)isMovieResourceLocalAvailable;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;
- (id)streamedMovie:(char)a0;

@end
