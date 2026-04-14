@protocol PXAudioAssetEntryPoint;

@interface PXAudioRequestOptions : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeOutDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) long long intent;
@property (retain, nonatomic) id<PXAudioAssetEntryPoint> entryPoint;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
