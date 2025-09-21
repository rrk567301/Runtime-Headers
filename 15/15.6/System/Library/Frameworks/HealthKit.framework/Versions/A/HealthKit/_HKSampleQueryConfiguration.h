@class NSArray;

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) NSArray *queryDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) char includeAutomaticTimeZones;
@property (nonatomic) char includeContributorInformation;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
