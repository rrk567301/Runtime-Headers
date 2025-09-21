@class HMActionSetBuilder, NSString, NSArray, NSPredicate, HMTriggerPolicy;

@interface HomeDataModel.MockTriggerBuilder : NSObject <HMEventTriggerBuilder, HMTriggerBuilderPrivate> {
    void /* function */ name;
    void /* function */ actionSets;
    void /* function */ recurrences;
    void /* function */ events;
    void /* function */ endEvents;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic) unsigned long long recurrenceDays;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic) BOOL executeOnce;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, copy) NSArray *endEvents;
@property (nonatomic, retain) HMTriggerPolicy *policy;
@property (nonatomic) BOOL nameIsConfigured;
@property (nonatomic, retain) HMActionSetBuilder *triggerOwnedActionSet;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEnabled;
- (void)removeEvent:(id)a0;
- (id)init;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (void)removeEndEvent:(id)a0;
- (void)addActionSet:(id)a0;
- (void)addEndEvent:(id)a0;
- (void)removeActionSet:(id)a0;
- (void)setName:(id)a0 isConfigured:(BOOL)a1;

@end
