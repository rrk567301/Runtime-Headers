@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (void)synchronize;
- (id)objectForKey:(id)a0;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1;
- (double)serverTimeoutInterval;

@end
