@class NSNumber, IOSurface;

@interface MADMultiModalInputImageSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) NSNumber *seed;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSurface:(id)a0 seed:(id)a1;

@end
