@interface RTDistanceInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double startDistance;
@property (readonly) double endDistance;
@property (readonly) double intervalLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDistance:(double)a0 endDistance:(double)a1;
- (id)initWithStartDate:(double)a0 length:(double)a1;

@end
