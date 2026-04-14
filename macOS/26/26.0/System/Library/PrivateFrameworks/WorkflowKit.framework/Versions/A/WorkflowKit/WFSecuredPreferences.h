@class NSMutableDictionary, NSDictionary, NSURL;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSDictionary *defaultPreferences;
@property (copy, nonatomic) NSURL *securedPreferencesFileURL;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)reload;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)savePreferences;
- (void)reloadWithDistributedNotification:(id)a0;

@end
