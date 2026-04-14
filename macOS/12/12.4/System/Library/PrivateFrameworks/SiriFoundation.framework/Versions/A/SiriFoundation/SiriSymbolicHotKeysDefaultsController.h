@interface SiriSymbolicHotKeysDefaultsController : NSUserDefaultsController

+ (id)sharedSiriSymbolicHotKeysDefaultsController;

- (void)setHotKeyValue:(id)a0;
- (id)hotKeyValue;
- (void)disableHotKey;

@end
