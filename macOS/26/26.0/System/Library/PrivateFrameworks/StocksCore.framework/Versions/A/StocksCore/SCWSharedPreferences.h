@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)objectForKey:(id)a0;
- (void)synchronize;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
