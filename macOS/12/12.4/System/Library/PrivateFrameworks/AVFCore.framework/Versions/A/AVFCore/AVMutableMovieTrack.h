@class NSArray, NSURL, AVMutableMovieTrackInternal, AVMediaDataStorage;

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal *_mutableMovieTrackInternal;
}

@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) AVMediaDataStorage *mediaDataStorage;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long alternateGroupID;
@property (nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (nonatomic) int timescale;

+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)trackWithTrackID:(int)a0 forMovie:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)locale;
- (id)languageCode;
- (void)setLanguageCode:(id)a0;
- (long long)layer;
- (void)setLayer:(long long)a0;
- (struct CGSize { double x0; double x1; })dimensions;
- (int)trackID;
- (id)extendedLanguageTag;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)setExtendedLanguageTag:(id)a0;
- (float)preferredVolume;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { } *)a0 withFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (void)addTrackAssociationToTrack:(id)a0 type:(id)a1;
- (void)removeTrackAssociationToTrack:(id)a0 type:(id)a1;
- (id)initWithTrackID:(int)a0 forMovie:(id)a1;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (void)_addFigAssetTrackNotifications;
- (void)_removeFigAssetTrackNotifications;
- (id)_stringForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString { } *)a0;
- (void)_setString:(id)a0 forProperty:(struct __CFString { } *)a1;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0 forProperty:(struct __CFString { } *)a1;
- (void)_signalMetadataUpdated;
- (struct CGSize { double x0; double x1; })cleanApertureDimensions;
- (struct CGSize { double x0; double x1; })productionApertureDimensions;
- (struct CGSize { double x0; double x1; })encodedPixelsDimensions;
- (long long)preferredMediaChunkSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkAlignment;
- (void)setCleanApertureDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setProductionApertureDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setEncodedPixelsDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredMediaChunkSize:(long long)a0;
- (void)setPreferredMediaChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPreferredMediaChunkAlignment:(long long)a0;
- (BOOL)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofTrack:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 copySampleData:(BOOL)a3 error:(id *)a4;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 decodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(id *)a3;
- (BOOL)insertMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 intoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (BOOL)appendMediaData:(id)a0 dataOffset:(long long *)a1;

@end
