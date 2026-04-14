@class NSString, NSNumber;

@interface CSPlace : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fullyFormattedAddress;
@property (readonly, nonatomic) NSString *namedLocation;
@property (readonly, nonatomic) NSNumber *latitude;
@property (readonly, nonatomic) NSNumber *longitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 fullyFormattedAddress:(id)a2 namedLocation:(id)a3;
- (id)initWithFullyFormattedAddress:(id)a0 namedLocation:(id)a1;
- (id)initWithNamedLocation:(id)a0;

@end
