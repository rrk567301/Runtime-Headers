@class NSString, NSDictionary, NSArray;

@interface WBSWebExtensionCommand : NSObject {
    NSDictionary *_properties;
    NSString *_shortcutKey;
    NSArray *_modifiers;
}

@property (readonly, copy, nonatomic) NSString *commandName;
@property (readonly, copy, nonatomic) NSString *commandDescription;
@property (readonly, copy, nonatomic) NSString *shortcut;
@property (readonly, copy, nonatomic) NSString *extensionComposedIdentifier;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0 extensionComposedIdentifier:(id)a1 outErrorMessage:(id *)a2;
- (void)_parseShortcut:(id)a0;

@end
