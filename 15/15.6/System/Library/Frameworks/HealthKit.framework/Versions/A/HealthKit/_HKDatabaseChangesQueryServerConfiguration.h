@class NSSet, HKQueryAnchor;

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSSet *sampleTypes;
@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) char includeChangeDetails;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) long long anchorStrategyChangeCountLimit;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
