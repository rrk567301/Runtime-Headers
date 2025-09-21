@interface _MDIndexExtensionManager : _MDExtensionManager

+ (id)sharedManager;
+ (void)setMemoryPressureStatus:(unsigned long long)a0;

- (void)loadExtensions;
- (id)init;

@end
