@class SafariWebExtension, NSString, NSImage, NSURL, NSDictionary, NSExtension, NSArray;

@interface ExtensionWrapper : NSObject {
    NSExtension *_appExtension;
    NSExtension *_contentBlockerAppExtension;
    SafariWebExtension *_webExtension;
    NSString *_iconDataURLString;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSImage *preferencesIcon;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSDictionary *websiteAccess;
@property (readonly, nonatomic) NSExtension *appExtension;
@property (readonly, copy, nonatomic) NSArray *errorStrings;
@property (readonly, nonatomic) SafariWebExtension *webExtension;
@property (readonly, nonatomic) BOOL isContentBlocker;

+ (id)extensionWrapperWithExtension:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)disable;
- (BOOL)canEnable;
- (id)initWithComposedIdentifier:(id)a0;
- (void)enableFromExtensionPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)enableFromOutsideExtensionPreferences;
- (void)_enableWebExtensionAndPromptForNewTabOverrideIfNecessary;

@end
