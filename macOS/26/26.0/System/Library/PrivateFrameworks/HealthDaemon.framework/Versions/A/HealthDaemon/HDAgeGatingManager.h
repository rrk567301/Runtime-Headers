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

- (id)initWithProfile:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1 queue:(id)a2;
- (void)dealloc;
- (id)ageInYearsWithError:(id *)a0;
- (void)unitTesting_updateAgeGates;
- (void)didReceiveDayChangeNotification:(id)a0;
- (void).cxx_destruct;

@end
