@class NSString, NSUserDefaults;

@interface WFUserDefaultsPersistence : NSObject <WeatherPreferencesPersistence>

@property (retain) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (BOOL)synchronize;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
