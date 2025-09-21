@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (void)reset;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void)setObject:(id)a0 forKey:(id)a1;
- (double)serverTimeoutInterval;

@end
