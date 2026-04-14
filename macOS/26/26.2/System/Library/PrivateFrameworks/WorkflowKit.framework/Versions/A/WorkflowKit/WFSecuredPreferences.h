@class NSMutableDictionary, NSDictionary, NSURL;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSDictionary *defaultPreferences;
@property (copy, nonatomic) NSURL *securedPreferencesFileURL;

- (void)reload;
- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithFileURL:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)savePreferences;
- (void)reloadWithDistributedNotification:(id)a0;

@end
