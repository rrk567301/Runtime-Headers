@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)reset;
- (id)objectForKey:(id)a0;
- (double)serverTimeoutInterval;

@end
