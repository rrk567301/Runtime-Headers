@class NSString, NSDate;

@interface PoliciesMO : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL outcome;
@property (copy, nonatomic) NSString *policyType;
@property (copy, nonatomic) NSString *reasonForRunning;

+ (id)fetchRequest;
+ (unsigned long long)defaultFetchLimit;
+ (unsigned long long)defaultFetchMaxAge;

- (BOOL)setRelationOn:(id)a0 to:(id)a1 withError:(id *)a2;

@end
