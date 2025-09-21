@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) char shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) char shouldIncludeActivitySummaryStatistics;
@property (nonatomic) char orderByDateAscending;
@property (nonatomic) unsigned long long limit;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
