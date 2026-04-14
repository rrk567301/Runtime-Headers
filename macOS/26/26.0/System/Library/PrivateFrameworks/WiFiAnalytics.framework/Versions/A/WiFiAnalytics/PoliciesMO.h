@class NSString, NSDate;

@interface PoliciesMO : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL outcome;
@property (copy, nonatomic) NSString *policyType;
@property (copy, nonatomic) NSString *reasonForRunning;

+ (id)fetchRequest;
+ (unsigned long long)defaultFetchLimit;
+ (unsigned long long)defaultFetchMaxAge;

@end
