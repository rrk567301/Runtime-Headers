@class NSArray, NSURL, AVMutableMovieTrackInternal, AVMediaDataStorage;

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal *_mutableMovieTrackInternal;
}

@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) AVMediaDataStorage *mediaDataStorage;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) long long alternateGroupID;
@property (nonatomic, getter=isModified) char modified;
@property (readonly, nonatomic) char hasProtectedContent;
@property (nonatomic) int timescale;

+ (char)expectsPropertyRevisedNotifications;
+ (id)trackWithTrackID:(int)a0 forMovie:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)languageCode;
- (id)locale;
- (void)setLanguageCode:(id)a0;
- (struct CGSize { double x0; double x1; })dimensions;
- (long long)layer;
- (void)setLayer:(long long)a0;
- (int)trackID;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (float)preferredVolume;
- (void)setPreferredMediaChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_addFigAssetTrackNotifications;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (void)_removeFigAssetTrackNotifications;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0 forProperty:(struct __CFString { } *)a1;
- (void)_setString:(id)a0 forProperty:(struct __CFString { } *)a1;
- (void)_signalMetadataUpdated;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString { } *)a0;
- (id)_stringForProperty:(struct __CFString { } *)a0;
- (void)addTrackAssociationToTrack:(id)a0 type:(id)a1;
- (char)appendMediaData:(id)a0 dataOffset:(long long *)a1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 decodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(id *)a3;
- (id)availableMetadataFormats;
- (struct CGSize { double x0; double x1; })cleanApertureDimensions;
- (struct CGSize { double x0; double x1; })encodedPixelsDimensions;
- (id)extendedLanguageTag;
- (id)initWithTrackID:(int)a0 forMovie:(id)a1;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (char)insertMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 intoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (char)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofTrack:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 copySampleData:(char)a3 error:(id *)a4;
- (char)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (id)metadataForFormat:(id)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })productionApertureDimensions;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)removeTrackAssociationToTrack:(id)a0 type:(id)a1;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { } *)a0 withFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setCleanApertureDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setEncodedPixelsDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setExtendedLanguageTag:(id)a0;
- (void)setPreferredMediaChunkAlignment:(long long)a0;
- (void)setPreferredMediaChunkSize:(long long)a0;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)setProductionApertureDimensions:(struct CGSize { double x0; double x1; })a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
