@class NSUserDefaults;

@interface MODefaultsManager : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (BOOL)isExtendedLogEnabled:(id)a0 forDetaultsManager:(id)a1;
+ (id)momentsDaemonDefaults;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)initWithSuiteName:(id)a0;
- (void)deleteObjectForKey:(id)a0;
- (id)initWithUniverse:(id)a0;
- (id)objectForKeyWithoutLog:(id)a0;
- (void)setObjectWithoutLog:(id)a0 forKey:(id)a1;

@end
