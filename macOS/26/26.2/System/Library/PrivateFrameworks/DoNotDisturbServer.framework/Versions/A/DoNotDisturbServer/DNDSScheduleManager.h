@class NSMutableDictionary, DNDSModeAssertionManager;
@protocol DNDSScheduleManagerDataSource;

@interface DNDSScheduleManager : NSObject {
    DNDSModeAssertionManager *_modeAssertionManager;
    NSMutableDictionary *_currentScheduleSettingsByModeIdentifier;
}

@property (weak, nonatomic) id<DNDSScheduleManagerDataSource> dataSource;

- (void)_refreshWithScheduleSettingsByModeIdentifier:(id)a0 context:(id)a1;
- (void)refresh;
- (void).cxx_destruct;
- (void)_refreshWithScheduleSettings:(id)a0 modeIdentifier:(id)a1 currentScheduleAssertion:(id)a2 context:(id)a3;
- (id)_scheduleManagerClientIdentifierForModeIdentifier:(id)a0;
- (id)initWithModeAssertionManager:(id)a0;

@end
