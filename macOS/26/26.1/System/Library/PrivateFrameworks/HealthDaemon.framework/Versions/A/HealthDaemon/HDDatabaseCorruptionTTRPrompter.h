@class HDDatabaseCorruptionEventStore, _HKBehavior;

@interface HDDatabaseCorruptionTTRPrompter : NSObject {
    HDDatabaseCorruptionEventStore *_corruptionStore;
    _HKBehavior *_behavior;
}

@property (copy, nonatomic) id /* block */ unitTest_willPresentTTRAlertHandler;

- (void).cxx_destruct;
- (id)init;
- (void)promptForEvent:(id)a0;
- (id)TTRAttemptRecordForProfile:(id)a0;
- (void)_popAlertWithRadarDescription:(id)a0;
- (id)initWithStore:(id)a0 behavior:(id)a1;
- (BOOL)shouldAttemptTTRForProfileIdentier:(id)a0 component:(long long)a1;

@end
