@class NSString, NSArray, AVMutableCompositionTrackInternal;

@interface AVMutableCompositionTrack : AVCompositionTrack {
    AVMutableCompositionTrackInternal *_mutablePriv;
}

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) int naturalTimeScale;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (copy, nonatomic) NSArray *segments;

+ (char)expectsPropertyRevisedNotifications;

- (void)setMetadata:(id)a0;
- (void)_insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fireKVO:(char)a1;
- (char)_insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofTrack:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 fireKVO:(char)a3 error:(id *)a4;
- (void)_notifyAssetThatDurationDidChangeWithSuccess:(char)a0;
- (void)_notifyAssetThatDurationWillChange;
- (void)_notifySelfThatSegmentsDidChangeWithSuccess:(char)a0;
- (void)_notifySelfThatSegmentsWillChange;
- (void)_removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fireKVO:(char)a1;
- (void)_setTrackReaderPropertyValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)_updateTrackAssociationToTrack:(id)a0 type:(id)a1 operation:(long long)a2;
- (void)addTrackAssociationToTrack:(id)a0 type:(id)a1;
- (long long)alternateGroupID;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (char)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofTrack:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;
- (char)insertTimeRanges:(id)a0 ofTracks:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)removeTrackAssociationToTrack:(id)a0 type:(id)a1;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { } *)a0 withFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setAlternateGroupID:(long long)a0;
- (char)validateTrackSegments:(id)a0 error:(id *)a1;

@end
