@class NSString, CalPreferences, NSDateComponents;

@interface CalFoundationPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (class, readonly, nonatomic) CalFoundationPreferences *shared;

@property (nonatomic) double simulatedDateForNowOffset;
@property (retain, nonatomic) NSString *stopTimeDemoMode;
@property (readonly, nonatomic) BOOL stopTimeDemoModeActive;
@property (readonly, nonatomic) NSDateComponents *stopTimeDemoModeComponents;
@property (nonatomic) double defaultEventDuration;

- (id)initWithPreferencesForUnitTesting:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
