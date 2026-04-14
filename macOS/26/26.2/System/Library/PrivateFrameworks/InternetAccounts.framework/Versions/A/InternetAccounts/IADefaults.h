@interface IADefaults : NSObject

+ (id)shared;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;

@end
