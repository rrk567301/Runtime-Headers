@interface IADefaults : NSObject

+ (id)shared;

- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;

@end
