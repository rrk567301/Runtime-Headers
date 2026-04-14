@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
