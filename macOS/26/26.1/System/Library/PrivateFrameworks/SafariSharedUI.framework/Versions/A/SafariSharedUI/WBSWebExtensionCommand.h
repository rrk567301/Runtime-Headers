@class NSString, NSDictionary, WKWebExtensionCommand, NSArray;

@interface WBSWebExtensionCommand : NSObject {
    NSDictionary *_properties;
    NSString *_shortcutKey;
    NSArray *_modifiers;
}

@property (readonly, nonatomic) WKWebExtensionCommand *webKitCommand;
@property (readonly, copy, nonatomic) NSString *commandName;
@property (readonly, copy, nonatomic) NSString *commandDescription;
@property (readonly, copy, nonatomic) NSString *shortcut;
@property (readonly, copy, nonatomic) NSString *extensionComposedIdentifier;
@property (readonly, copy, nonatomic) NSString *keyEquivalent;
@property (readonly, nonatomic) unsigned long long keyEquivalentModifierMask;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithWebKitCommand:(id)a0;

@end
