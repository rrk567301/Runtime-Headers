@interface RTLearnedRouteLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) BOOL followedByUTurn;
@property (readonly, nonatomic) int locationReferenceFrame;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 course:(double)a2 followedByUTurn:(BOOL)a3 locationReferenceFrame:(int)a4;

@end
