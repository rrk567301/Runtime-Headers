@class NSDictionary, NSMutableSet;

@interface EDSearchableIndexSchedulerState : NSObject

@property (nonatomic) double otherIndexingTime;
@property (nonatomic) double fastPassIndexingTime;
@property (readonly, copy, nonatomic) NSMutableSet *indexingEnabledForActivityTypes;
@property (readonly, copy, nonatomic) NSMutableSet *indexingEnabledForTaskTypes;
@property (readonly, nonatomic, getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted;
@property (nonatomic) double maintenanceIndexingTime;
@property (readonly, copy, nonatomic) NSDictionary *powerEventData;
@property (readonly, nonatomic) long long fastPassIndexedItemCount;
@property (readonly, nonatomic, getter=isIndexingEnabledByActivities) BOOL indexingEnabledByActivities;

- (BOOL)isIndexingEnabledForActivityType:(id)a0;
- (id)init;
- (BOOL)isIndexingEnabledForTaskType:(id)a0;
- (void).cxx_destruct;
- (void)setDataSourceIndexingPermitted:(BOOL)a0;
- (void)disableIndexingForActivityType:(id)a0;
- (BOOL)_isIndexingEnabledByActivitiesOrTasks;
- (void)didIndexForTime:(double)a0;
- (void)didIndexItemCount:(long long)a0;
- (void)disableIndexingForTaskType:(id)a0;
- (void)enableIndexingForActivityType:(id)a0;
- (void)enableIndexingForTaskType:(id)a0;

@end
