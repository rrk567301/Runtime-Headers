@class NSString, HDProfile, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HDAgeGatingManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    int _userCharacteristicsDidChangeNotificationToken;
    NSUserDefaults *_userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)ageInYearsWithError:(id *)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (void)didReceiveDayChangeNotification:(id)a0;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1 queue:(id)a2;
- (void)profileDidBecomeReady:(id)a0;
- (void)unitTesting_updateAgeGates;

@end
