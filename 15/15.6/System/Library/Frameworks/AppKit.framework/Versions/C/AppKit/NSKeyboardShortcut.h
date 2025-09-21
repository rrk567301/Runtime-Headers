@class NSString;

@interface NSKeyboardShortcut : NSObject <NSCopying>

@property (readonly) NSString *keyEquivalent;
@property (readonly) unsigned long long modifierMask;
@property (readonly) NSString *localizedDisplayName;
@property (readonly) NSString *localizedKeyEquivalentDisplayName;
@property (readonly) NSString *localizedModifierMaskDisplayName;
@property (readonly) NSString *preferencesEncoding;

+ (id)localizedShortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1 withAttributes:(id)a2;
+ (id)localizedKeyEquivalentForInput:(id)a0;
+ (void)cacheWellKnownLocalizedShortcutKeys;
+ (id)emptyShortcut;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
+ (id)shortcutWithPreferencesEncoding:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isEmpty;
- (char)_keyEquivalentIsUpperCase;
- (id)initWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
- (char)isFunctionKey;
- (id)localizedExtendedDisplayName:(char)a0;

@end
