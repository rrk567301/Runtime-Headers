@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)respiratoryPreferencesDataSource;
+ (id)ageGatingDataSource;
+ (id)privacyPreferencesDataSource;
+ (id)sharedHealthPreferencesDataSource;

- (id)initWithUserDefaults:(id)a0;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void).cxx_destruct;

@end
