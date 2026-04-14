@class NSUserDefaults;
@protocol SRUIFPreferencesDelegate;

@interface SRUIFPreferences : NSObject {
    NSUserDefaults *_userDefaults;
}

@property (weak, nonatomic) id<SRUIFPreferencesDelegate> delegate;

- (id)stringForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)initWithSuiteName:(id)a0;
- (void)_mutateValueForKey:(id)a0 block:(id /* block */)a1;
- (id)initWithDefaultsAtURL:(id)a0;
- (id)initWithDefaultsResource:(id)a0 withExtension:(id)a1 inBundle:(id)a2;

@end
