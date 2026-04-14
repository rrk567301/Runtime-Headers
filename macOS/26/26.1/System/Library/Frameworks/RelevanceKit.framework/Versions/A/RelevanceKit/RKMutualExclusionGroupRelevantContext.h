@class NSString;

@interface RKMutualExclusionGroupRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)analyticsDescription;

@end
