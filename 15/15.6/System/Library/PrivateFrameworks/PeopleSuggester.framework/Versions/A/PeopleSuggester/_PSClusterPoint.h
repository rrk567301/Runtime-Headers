@class NSDate;

@interface _PSClusterPoint : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char timestampExists;
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithX:(double)a0 Y:(double)a1;
- (double)distanceToHull:(id)a0;
- (double)distanceToLineFormedByStart:(id)a0 End:(id)a1;
- (double)euclideanDistanceToPoint:(id)a0;
- (int)findSideOfLineFormedByStart:(id)a0 End:(id)a1;
- (char)inConvexHull:(id)a0;

@end
