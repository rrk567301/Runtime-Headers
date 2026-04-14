@class NSString, NSArray, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

@property (readonly, retain, nonatomic) NSDate *lastRecorded;
@property (readonly, nonatomic) long long numOfRateLimitPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordTimeAndRefillIfNeededRaw;
- (BOOL)debited;
- (id)init;
- (id)initWithPeriodToCountMap:(id)a0;
- (void).cxx_destruct;
- (BOOL)credit;

@end
