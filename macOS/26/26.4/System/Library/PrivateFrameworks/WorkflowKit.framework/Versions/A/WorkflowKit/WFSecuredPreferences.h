@class NSMutableDictionary, NSDictionary, NSURL;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSDictionary *defaultPreferences;
@property (copy, nonatomic) NSURL *securedPreferencesFileURL;

- (void)reload;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)registerDefaults:(id)a0;
- (void)dealloc;
- (void)savePreferences;
- (void)reloadWithDistributedNotification:(id)a0;

@end
