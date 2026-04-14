@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject <ADCorePreferencesStoring>

@property (retain, nonatomic) NSMutableDictionary *factoryDefaults;
@property (nonatomic) struct __CFString { } *defaultsBundleID;

+ (id)sharedInstance;
+ (id)factoryDefaults;
+ (void)addFactoryDefaults:(id)a0;

- (void)setString:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void)_setDefaultValue:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)defaultIsSetForKey:(id)a0;
- (id)init;
- (id)_defaultValueForKey:(id)a0 valueClass:(Class)a1;

@end
