@class NSString;

@interface AKProtoAccountContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long ageRange;
@property (nonatomic) BOOL shouldForceShieldUI;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAgeRange:(unsigned long long)a0;
- (id)initWithGivenName:(id)a0 lastName:(id)a1 ageRange:(unsigned long long)a2;

@end
