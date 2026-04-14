@class NSString;

@interface NSKeyboardShortcut : NSObject <NSCopying>

@property (readonly) NSString *keyEquivalent;
@property (readonly) unsigned long long modifierMask;
@property (readonly) NSString *localizedDisplayName;
@property (readonly) NSString *localizedKeyEquivalentDisplayName;
@property (readonly) NSString *localizedModifierMaskDisplayName;
@property (readonly) NSString *preferencesEncoding;

+ (id)shortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
+ (id)emptyShortcut;
+ (id)localizedKeyEquivalentForInput:(id)a0;
+ (id)localizedShortcutWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1 withAttributes:(id)a2;
+ (void)cacheWellKnownLocalizedShortcutKeys;
+ (id)shortcutWithPreferencesEncoding:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEmpty;
- (id)localizedExtendedDisplayName:(BOOL)a0;
- (id)initWithKeyEquivalent:(id)a0 modifierMask:(unsigned long long)a1;
- (BOOL)_keyEquivalentIsUpperCase;
- (BOOL)isFunctionKey;

@end
