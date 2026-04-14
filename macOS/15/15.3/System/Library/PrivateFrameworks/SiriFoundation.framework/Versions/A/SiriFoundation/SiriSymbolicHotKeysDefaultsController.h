@interface SiriSymbolicHotKeysDefaultsController : NSUserDefaultsController

+ (id)defaultNonSAEHotKeyDictionary;
+ (id)defaultSAEHotKeyDictionary;
+ (id)hotKeyEitherCommandTwice;
+ (id)hotKeyFunctionSpace;
+ (id)hotKeyHoldCommandSpace;
+ (id)hotKeyHoldOptionSpace;
+ (id)hotKeyLeftCommandTwice;
+ (id)hotKeyRightCommandTwice;
+ (id)hotKeyWithCharCode:(unsigned short)a0 virtualKey:(unsigned short)a1 modifier:(unsigned int)a2 type:(id)a3;
+ (id)hotkeyDisabledNonSAE;
+ (id)hotkeyDisabledSAE;
+ (BOOL)isNonSAECustomizedShortcut:(id)a0;
+ (BOOL)isNonSAEPreDefinedHotKey:(id)a0;
+ (BOOL)isSAEPreDefinedHotKey:(id)a0;
+ (id)sharedSiriSymbolicHotKeysDefaultsController;

- (void)setHotKeyValue:(id)a0;
- (void)disableHotKey;
- (id)hotKeyMigrationIfNeeded:(id)a0;
- (id)hotKeyValue;
- (id)preSAEHotKey;
- (id)saeHotKey;

@end
