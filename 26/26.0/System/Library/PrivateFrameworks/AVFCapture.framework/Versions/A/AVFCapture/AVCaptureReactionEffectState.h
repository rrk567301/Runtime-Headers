@class NSString;

@interface AVCaptureReactionEffectState : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (readonly, nonatomic) NSString *reactionType;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (id)initFromDictionary:(id)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithReactionType:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithReactionType:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
