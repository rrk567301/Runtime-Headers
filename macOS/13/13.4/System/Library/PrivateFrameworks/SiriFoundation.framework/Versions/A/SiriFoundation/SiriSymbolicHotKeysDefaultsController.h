@interface SiriSymbolicHotKeysDefaultsController : NSUserDefaultsController

+ (id)sharedSiriSymbolicHotKeysDefaultsController;

- (void)setHotKeyValue:(id)a0;
- (void)disableHotKey;
- (id)hotKeyValue;

@end
