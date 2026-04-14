@class NSSet;

@interface RKRegulatoryDomainRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSSet *countryCodes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)analyticsDescription;
- (id)initWithCountryCodes:(id)a0;

@end
