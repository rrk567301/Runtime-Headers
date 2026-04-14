@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;

@end
