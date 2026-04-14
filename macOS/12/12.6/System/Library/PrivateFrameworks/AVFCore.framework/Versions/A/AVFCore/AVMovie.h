@class NSArray, NSURL, NSData, AVMediaDataStorage, AVMovieInternal;

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {
    AVMovieInternal *_movie;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) BOOL canContainMovieFragments;
@property (readonly, nonatomic) BOOL containsMovieFragments;

+ (void)initialize;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)movieTypes;
+ (id)movieWithURL:(id)a0 options:(id)a1;
+ (id)movieWithData:(id)a0 options:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracksWithMediaType:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)_assetInspectorLoader;
- (Class)_classForMovieTracks;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (id)_assetInspector;
- (id)trackReferences;
- (BOOL)hasProtectedContent;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)_absoluteURL;
- (unsigned long long)referenceRestrictions;
- (BOOL)_shouldPrepareToOptimizeForExclusivePlayback;
- (id)_initializationOptions;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (void)_startListeningToLoaderNotifications;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0 URL:(id)a1 data:(id)a2 options:(id)a3;
- (void)_stopListeningToLoaderNotifications;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)_initWithFigError:(int)a0 userInfo:(id)a1;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (struct OpaqueFigMutableMovie { } *)_mutableMovieForFileType:(id)a0;
- (id)movieHeaderWithFileType:(id)a0 error:(id *)a1;
- (BOOL)writeMovieHeaderToURL:(id)a0 fileType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)isCompatibleWithFileType:(id)a0;

@end
