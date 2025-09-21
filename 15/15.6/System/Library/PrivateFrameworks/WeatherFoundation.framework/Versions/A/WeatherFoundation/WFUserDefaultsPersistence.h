@class NSString, NSUserDefaults;

@interface WFUserDefaultsPersistence : NSObject <WeatherPreferencesPersistence>

@property (retain) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (char)synchronize;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (id)initWithUserDefaults:(id)a0;

@end
