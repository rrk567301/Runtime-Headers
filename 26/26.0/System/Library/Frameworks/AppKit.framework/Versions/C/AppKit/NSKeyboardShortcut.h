@class NSString;

@interface NSKeyboardShortcut : NSObject <NSCopying>

@property (readonly) NSString *keyEquivalent;
@property (readonly) unsigned long long modifierMask;
@property (readonly) NSString *localizedDisplayName;
@property (readonly) NSString *localizedKeyEquivalentDisplayName;
@property (readonly) NSString *localizedModifierMaskDisplayName;
@property (readonly) NSString *preferencesEncoding;

+ (id)localizedKeyEquivalentForInput:(id)a0;
+ (id)localizedShortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1 withAttributes:(id)a2;
+ (void)cacheWellKnownLocalizedShortcutKeys;
+ (id)emptyShortcut;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
+ (id)shortcutWithPreferencesEncoding:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_keyEquivalentIsUpperCase;
- (id)initWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
- (BOOL)isFunctionKey;
- (id)localizedExtendedDisplayName:(BOOL)a0;

@end
