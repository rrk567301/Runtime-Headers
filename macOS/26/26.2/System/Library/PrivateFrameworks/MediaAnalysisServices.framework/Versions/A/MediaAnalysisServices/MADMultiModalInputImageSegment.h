@class NSNumber, IOSurface;

@interface MADMultiModalInputImageSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) NSNumber *seed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSurface:(id)a0 seed:(id)a1;

@end
