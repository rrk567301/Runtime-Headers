@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *intervalCohortAggregateBudgetValue;
@property (retain, nonatomic) NSNumber *intervalChunksValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (id)budgetPropertiesWithName:(id)a0 fromDictionary:(id)a1;
+ (id)budgetPropertiesForKey:(id)a0;
+ (id)budgetPropertiesFromFile:(id)a0;
+ (id)budgetMaintenanceSchedule;
+ (id)allBudgetPropertiesKeys;
+ (void)initializeAllBudgetProperties;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (id)init;

@end
