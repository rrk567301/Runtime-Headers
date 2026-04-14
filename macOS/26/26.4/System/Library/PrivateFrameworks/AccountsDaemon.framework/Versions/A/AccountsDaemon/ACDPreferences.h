@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)reset;
- (double)serverTimeoutInterval;

@end
