@protocol PXAudioAssetEntryPoint;

@interface PXAudioRequestOptions : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeOutDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (nonatomic) char networkAccessAllowed;
@property (nonatomic) long long intent;
@property (retain, nonatomic) id<PXAudioAssetEntryPoint> entryPoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
