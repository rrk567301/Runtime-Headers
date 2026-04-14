@class NSString, NSDate;

@interface PoliciesUsageMO : PoliciesMO

@property (copy, nonatomic) NSDate *date_lt;
@property (copy, nonatomic) NSString *object;
@property (copy, nonatomic) NSString *timeSpan;

+ (id)fetchRequest;
+ (id)predicateForPolicyUsageForTimeSpan:(unsigned long long)a0 forEntity:(id)a1;

@end
