@class _TtC26HearingModeSettingsUIMacOS25EnrollmentAnalyticManager;

@interface HearingModeSettingsUIMacOS.EnrollmentAnalyticManager : NSObject {
    void /* unknown type, empty encoding */ accessoryPID;
    void /* unknown type, empty encoding */ agType;
    void /* unknown type, empty encoding */ agCategoryLeft;
    void /* unknown type, empty encoding */ agCategoryRight;
    void /* unknown type, empty encoding */ enrollmentResult;
    void /* unknown type, empty encoding */ enrollmentType;
    void /* unknown type, empty encoding */ entrance;
}

@property (class, nonatomic, readonly) _TtC26HearingModeSettingsUIMacOS25EnrollmentAnalyticManager *shared;

- (void).cxx_destruct;
- (id)init;
- (void)submitEvent;
- (void)updateKeyWithKey:(long long)a0 value:(long long)a1;

@end
