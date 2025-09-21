@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) _CLLSLLocationCoordinate *coordinate;
@property (nonatomic) double altitude;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)initWithCoordinate:(id)a0;
- (id)initWithCoordinate:(id)a0 altitude:(double)a1 timetamp:(double)a2;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 timetamp:(double)a3;

@end
