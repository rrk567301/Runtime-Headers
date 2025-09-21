@class NSDictionary, NSMutableSet;

@interface EDSearchableIndexSchedulerState : NSObject

@property (nonatomic) double otherIndexingTime;
@property (nonatomic) double fastPassIndexingTime;
@property (readonly, copy, nonatomic) NSMutableSet *indexingEnabledForActivityTypes;
@property (readonly, copy, nonatomic) NSMutableSet *indexingEnabledForTaskTypes;
@property (readonly, nonatomic, getter=isDataSourceIndexingPermitted) char dataSourceIndexingPermitted;
@property (nonatomic) long long budgetedItemCountRemaining;
@property (nonatomic) double budgetedTimeRemaining;
@property (nonatomic) double maintenanceIndexingTime;
@property (readonly, nonatomic) char hasAvailableIndexingBudget;
@property (readonly, nonatomic) char needsToStopBudgetedIndexing;
@property (readonly, copy, nonatomic) NSDictionary *powerEventData;
@property (readonly, nonatomic) long long fastPassIndexedItemCount;
@property (readonly, nonatomic, getter=isIndexingEnabledByActivities) char indexingEnabledByActivities;

- (void).cxx_destruct;
- (void)disableIndexingForActivityType:(id)a0;
- (void)setDataSourceIndexingPermitted:(char)a0;
- (char)_isIndexingEnabledByActivitiesOrTasks;
- (void)didIndexForTime:(double)a0;
- (void)didIndexItemCount:(long long)a0;
- (void)disableIndexingForTaskType:(id)a0;
- (void)enableIndexingForActivityType:(id)a0;
- (void)enableIndexingForTaskType:(id)a0;
- (id)initWithBudgetedTimeRemaining:(double)a0;
- (char)isIndexingEnabledForActivityType:(id)a0;
- (char)isIndexingEnabledForTaskType:(id)a0;

@end
