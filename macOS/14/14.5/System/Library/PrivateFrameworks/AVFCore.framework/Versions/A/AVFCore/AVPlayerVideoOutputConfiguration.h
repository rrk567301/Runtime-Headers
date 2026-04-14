@class NSArray, AVPlayerItem;

@interface AVPlayerVideoOutputConfiguration : NSObject

@property (weak, nonatomic) AVPlayerItem *sourcePlayerItem;
@property (copy, nonatomic) NSArray *dataChannelDescriptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } activationTime;

- (void)dealloc;
- (id)copy;
- (void).cxx_destruct;
- (id)initWithSourcePlayerItem:(id)a0 dataChannelDescriptions:(id)a1 activationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
