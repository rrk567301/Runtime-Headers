@class NSSet;

@interface RKRegulatoryDomainRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSSet *countryCodes;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)analyticsDescription;
- (id)initWithCountryCodes:(id)a0;

@end
