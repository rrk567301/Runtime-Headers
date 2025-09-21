@class NSNumber, AVPlayerItem;

@interface ISPlayerContent : NSObject

@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (readonly, nonatomic) AVPlayerItem *videoPlayerItem;
@property (readonly, nonatomic) char photoHasColorAdjustments;
@property (readonly, nonatomic) char photoIsOriginal;
@property (readonly, nonatomic) char supportsVitality;
@property (readonly, nonatomic) NSNumber *variationIdentifier;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhoto:(struct CGImage { } *)a0 photoIsOriginal:(char)a1 photoEXIFOrientation:(int)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 photoHasColorAdjustments:(char)a5 videoPlayerItem:(id)a6 variationIdentifier:(id)a7 supportsVitality:(char)a8;

@end
