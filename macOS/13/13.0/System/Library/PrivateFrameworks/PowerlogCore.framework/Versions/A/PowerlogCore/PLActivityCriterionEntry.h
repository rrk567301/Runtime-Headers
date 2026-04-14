@class NSDictionary, NSString, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion

@property (copy) id /* block */ criterionBlock;
@property (retain) NSDictionary *filter;
@property (retain) PLEntryNotificationOperatorComposition *entryListener;
@property (readonly) NSString *entryKey;

+ (id)pluggedInCriterion;
+ (id)displayOffCriterion;
+ (id)audioOffCriterion;

- (id)description;
- (void).cxx_destruct;
- (void)didEnableActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (id)initWithEntryKey:(id)a0 withCriterionBlock:(id /* block */)a1;
- (id)initWithEntryKey:(id)a0 withFilter:(id)a1 withCriterionBlock:(id /* block */)a2;
- (void)scheduleEntryListener;

@end
