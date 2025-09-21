@interface IADefaults : NSObject

+ (id)shared;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
