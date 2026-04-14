@class NSString;

@interface RKMutualExclusionGroupRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)analyticsDescription;

@end
