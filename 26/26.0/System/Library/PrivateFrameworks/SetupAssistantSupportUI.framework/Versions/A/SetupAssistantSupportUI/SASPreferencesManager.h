@interface SASPreferencesManager : NSObject

@property (class, readonly, nonatomic) SASPreferencesManager *shared;

- (void)removeValueForKey:(unsigned long long)a0;
- (void)setValue:(id)a0 forKey:(unsigned long long)a1;
- (BOOL)_canAccessKey:(unsigned long long)a0;
- (id)_domainForKey:(unsigned long long)a0;
- (id)_nameForKey:(unsigned long long)a0;
- (id)_userForKey:(unsigned long long)a0;
- (id)readValueForKey:(unsigned long long)a0;

@end
