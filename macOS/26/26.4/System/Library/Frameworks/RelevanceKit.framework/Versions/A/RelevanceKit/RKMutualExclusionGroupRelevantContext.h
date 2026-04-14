@class NSString;

@interface RKMutualExclusionGroupRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)analyticsDescription;

@end
