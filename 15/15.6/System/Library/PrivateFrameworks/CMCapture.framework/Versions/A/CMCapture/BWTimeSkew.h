@interface BWTimeSkew : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } native;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } original;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } adjusted;
@property (readonly, nonatomic) char isBracketFrame;
@property (readonly, nonatomic) char isSISFrame;
@property (nonatomic) char isStartOfDiscontinuity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithNativeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 originalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isBracketFrame:(char)a2 isSISFrame:(char)a3;

@end
