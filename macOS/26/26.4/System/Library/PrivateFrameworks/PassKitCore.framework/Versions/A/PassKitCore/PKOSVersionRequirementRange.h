@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKOSVersionRequirement *minimum;
@property (readonly, nonatomic) PKOSVersionRequirement *maximum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToOSVersionRequirementRange:(id)a0;
- (id)initWithMinimumVersion:(id)a0 maximumVersion:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)versionMeetsRequirements:(id)a0 deviceClass:(id)a1;

@end
