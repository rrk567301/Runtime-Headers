@class _DPPrivacyBudgetRecord, _DPPrivacyBudgetProperties, NSString;

@interface _DPPrivacyBudget : NSObject

@property (readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)initialize;
+ (long long)balanceForBudgetWithName:(id)a0;
+ (id)budgetWithName:(id)a0;
+ (double)balanceForCohortAggregateBudgetWithName:(id)a0;
+ (void)createBudgetRecordsIn:(id)a0;
+ (char)createDatabaseRecordIfMissingIn:(id)a0 key:(id)a1 balance:(long long)a2 cohortAggregateBalance:(double)a3;
+ (char)credit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (char)creditCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (char)debit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (char)debitCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (id)enforceBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (id)enforceEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (id)enforceSimpleBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (id)fetchBudgetKeyNamesFrom:(id)a0;
+ (id)fetchBudgetRecordFrom:(id)a0 key:(id)a1;
+ (char)isMultiDayIntervalBudgetWithName:(id)a0;
+ (void)removeBudgetWithName:(id)a0;
+ (void)resetAllBudgetRecordsIn:(id)a0;
+ (void)resetLastUpdateDateForName:(id)a0;
+ (void)updateAllBudgetsIn:(id)a0;
+ (void)updateAllBudgetsUnsafeIn:(id)a0;
+ (void)updateBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)updateEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)updateSimpleBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 budgetProperties:(id)a1;
- (char)initializeBudgetRecordFrom:(id)a0;

@end
