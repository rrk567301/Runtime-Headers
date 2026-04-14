@interface NIDLTDOACoordinatesUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long coordinatesType;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ coordinates;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDLTDOACoordinatesType:(SEL)a0 coordinates:(long long)a1;

@end
