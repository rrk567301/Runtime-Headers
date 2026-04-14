@class _DPPrivacyBudgetRecord, _DPPrivacyBudgetProperties, NSString;

@interface _DPPrivacyBudget : NSObject

@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)initialize;
+ (BOOL)debitCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (long long)balanceForBudgetWithName:(id)a0;
+ (id)enforceEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)updateAllBudgetsIn:(id)a0;
+ (id)enforceBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)updateAllBudgetsUnsafeIn:(id)a0;
+ (void)createBudgetRecordsIn:(id)a0;
+ (void)removeBudgetWithName:(id)a0;
+ (BOOL)isMultiDayIntervalBudgetWithName:(id)a0;
+ (id)enforceSimpleBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)resetLastUpdateDateForName:(id)a0;
+ (BOOL)createDatabaseRecordIfMissingIn:(id)a0 key:(id)a1 balance:(long long)a2 cohortAggregateBalance:(double)a3;
+ (void)creditUnsafe:(unsigned long long)a0 budgetWithName:(id)a1;
+ (id)fetchBudgetKeyNamesFrom:(id)a0;
+ (void)resetAllBudgetRecordsIn:(id)a0;
+ (BOOL)credit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (id)budgetWithName:(id)a0;
+ (void)updateEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 refundAmount:(unsigned long long)a2 inDatabase:(id)a3;
+ (id)fetchBudgetRecordFrom:(id)a0 key:(id)a1;
+ (double)balanceForCohortAggregateBudgetWithName:(id)a0;
+ (BOOL)creditCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (void)updateBudgetForRecords:(id)a0 withKey:(id)a1 refundAmount:(unsigned long long)a2 inDatabase:(id)a3;
+ (BOOL)debit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (void)debitUnsafe:(unsigned long long)a0 budgetWithName:(id)a1;
+ (void)updateSimpleBudgetForRecords:(id)a0 withKey:(id)a1 refundAmount:(unsigned long long)a2 inDatabase:(id)a3;

- (BOOL)initializeBudgetRecordFrom:(id)a0;
- (BOOL)initializeBudgetRecordUnsafeFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 budgetProperties:(id)a1;
- (id)description;
- (unsigned long long)maxBalance;

@end
