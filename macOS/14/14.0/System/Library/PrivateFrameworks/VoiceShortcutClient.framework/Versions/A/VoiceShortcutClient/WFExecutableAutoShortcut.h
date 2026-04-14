@class LNAutoShortcutLocalizedPhrase, LNAutoShortcut, NSString, WFAppShortcutNamedQueryInfo, WFAutoShortcutEntityInfo, LNFullyQualifiedActionIdentifier;

@interface WFExecutableAutoShortcut : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNAutoShortcut *underlyingAutoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedIdentifier;
@property (readonly, nonatomic) WFAutoShortcutEntityInfo *entityInfo;
@property (readonly, nonatomic) unsigned long long chicletColor;
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *shortcutDescription;
@property (readonly, nonatomic) NSString *triggerPhrase;
@property (readonly, nonatomic) BOOL isDeprecatedStyle;
@property (readonly, nonatomic) NSString *base64ArchivedData;
@property (readonly, nonatomic) WFAppShortcutNamedQueryInfo *namedQueryInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 entityInfo:(id)a2;

@end
