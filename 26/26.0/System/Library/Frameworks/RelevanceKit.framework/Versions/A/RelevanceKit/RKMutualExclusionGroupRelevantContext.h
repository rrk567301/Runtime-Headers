@class NSString;

@interface RKMutualExclusionGroupRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupIdentifier:(id)a0;
- (id)analyticsDescription;

@end
