@class NSString;

@interface WBSWebExtensionCommandShortcutConflict : NSObject

@property (readonly, copy, nonatomic) NSString *shortcut;
@property (readonly, copy, nonatomic) NSString *extensionDisplayName;
@property (readonly, copy, nonatomic) NSString *extensionDisplayShortName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithShortcut:(id)a0 extensionDisplayName:(id)a1 extensionDisplayShortName:(id)a2;

@end
