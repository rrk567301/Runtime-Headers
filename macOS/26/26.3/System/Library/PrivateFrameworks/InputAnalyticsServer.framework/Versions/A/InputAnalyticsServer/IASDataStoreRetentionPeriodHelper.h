@interface IASDataStoreRetentionPeriodHelper : NSObject

+ (BOOL)isColumnRetentionPeriod:(unsigned long long)a0 compatibleWithTableRetentionPeriod:(unsigned long long)a1;
+ (id)stringFromRetentionPeriod:(unsigned long long)a0;

@end
