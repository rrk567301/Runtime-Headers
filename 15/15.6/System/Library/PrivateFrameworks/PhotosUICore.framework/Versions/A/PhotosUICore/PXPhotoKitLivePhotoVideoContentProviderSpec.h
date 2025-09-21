@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } crossfadeDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } loopStartTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopTimeRange;
@property (nonatomic) char stabilizeIfPossible;
@property (nonatomic) char wantsAudio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)identifier;

@end
