@interface NISystemState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long uwbPreciseDistanceAvailability;
@property (nonatomic) unsigned long long uwbExtendedDistanceAvailability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithUWBPreciseDistanceAvailability:(unsigned long long)a0 uwbExtendedDistanceAvailability:(unsigned long long)a1;

@end
