@class NSArray, HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (copy, nonatomic) NSArray *queryDescriptors;
@property (nonatomic) char includeDeletedObjects;
@property (nonatomic) char includeAutomaticTimeZones;
@property (nonatomic) char includeContributorInformation;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
