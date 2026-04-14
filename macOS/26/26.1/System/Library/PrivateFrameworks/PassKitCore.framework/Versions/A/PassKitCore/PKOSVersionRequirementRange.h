@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKOSVersionRequirement *minimum;
@property (readonly, nonatomic) PKOSVersionRequirement *maximum;

- (BOOL)isEqualToOSVersionRequirementRange:(id)a0;
- (unsigned long long)hash;
- (id)initWithMinimumVersion:(id)a0 maximumVersion:(id)a1;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)versionMeetsRequirements:(id)a0 deviceClass:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
