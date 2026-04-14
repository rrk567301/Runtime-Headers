@class NSDictionary, NSUserDefaults;

@interface FPUserDefaultsWithRootUserWorkaround : NSObject {
    NSUserDefaults *_userDefaults;
    NSDictionary *_localUserDefaults;
}

+ (id)_userDefaultsSearchList;

- (id)stringForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0;

@end
