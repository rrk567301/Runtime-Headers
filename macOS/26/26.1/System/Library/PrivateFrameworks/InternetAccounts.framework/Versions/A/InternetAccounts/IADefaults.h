@interface IADefaults : NSObject

+ (id)shared;

- (void)synchronize;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
