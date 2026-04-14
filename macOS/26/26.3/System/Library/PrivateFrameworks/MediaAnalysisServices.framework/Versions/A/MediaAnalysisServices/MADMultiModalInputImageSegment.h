@class NSNumber, IOSurface;

@interface MADMultiModalInputImageSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) NSNumber *seed;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSurface:(id)a0 seed:(id)a1;

@end
