@class NSSet, WFDebouncer, WFConfiguredTrigger, WFWorkflowReference;

@interface WFTriggerNotificationDebouncerItem : NSObject

@property (readonly, nonatomic) WFConfiguredTrigger *configuredTrigger;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (retain, nonatomic) NSSet *triggerEventIDs;
@property (readonly, nonatomic) unsigned long long notificationType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguredTrigger:(id)a0 notificationType:(unsigned long long)a1 reference:(id)a2 triggerEventIDs:(id)a3 debouncer:(id)a4;

@end
