@class NSSet;

@interface RKRegulatoryDomainRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSSet *countryCodes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)analyticsDescription;
- (id)initWithCountryCodes:(id)a0;

@end
