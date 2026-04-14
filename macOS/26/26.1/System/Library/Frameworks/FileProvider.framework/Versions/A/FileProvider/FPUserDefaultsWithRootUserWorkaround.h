@class NSDictionary, NSUserDefaults;

@interface FPUserDefaultsWithRootUserWorkaround : NSObject {
    NSUserDefaults *_userDefaults;
    NSDictionary *_localUserDefaults;
}

+ (id)_userDefaultsSearchList;

- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;

@end
