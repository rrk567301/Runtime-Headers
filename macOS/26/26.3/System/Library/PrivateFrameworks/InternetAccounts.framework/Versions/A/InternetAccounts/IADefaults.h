@interface IADefaults : NSObject

+ (id)shared;

- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;

@end
