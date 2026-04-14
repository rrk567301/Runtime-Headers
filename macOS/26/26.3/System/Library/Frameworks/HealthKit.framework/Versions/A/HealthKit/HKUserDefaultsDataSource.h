@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)ageGatingDataSource;
+ (id)sharedHealthPreferencesDataSource;
+ (id)respiratoryPreferencesDataSource;
+ (id)privacyPreferencesDataSource;

- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;

@end
