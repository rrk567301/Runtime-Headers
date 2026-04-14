@class NSMutableDictionary, NSDictionary, NSURL;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSDictionary *defaultPreferences;
@property (copy, nonatomic) NSURL *securedPreferencesFileURL;

- (id)initWithFileURL:(id)a0;
- (void)registerDefaults:(id)a0;
- (void)reload;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)savePreferences;
- (void)reloadWithDistributedNotification:(id)a0;

@end
