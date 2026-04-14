@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)privacyPreferencesDataSource;
+ (id)respiratoryPreferencesDataSource;
+ (id)ageGatingDataSource;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;

@end
