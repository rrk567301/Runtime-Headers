@class NSSharingService, NSString, NSDictionary, NSURL;

@interface _NSExtensionQuickAction : _NSQuickAction {
    NSDictionary *_extensionAttributes;
    NSURL *_bundleURL;
}

@property (readonly) NSSharingService *_sharingService;
@property (readonly, copy) NSString *_extensionIdentifier;

+ (id)quickActionForPresentation:(id)a0 extension:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)_bundleURL;
- (id)title;
- (void)performWithItemSource:(id)a0;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canMoveToTrash;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (Class)_validationClass;
- (Class)_preferencesClass;
- (BOOL)hasIcon;
- (BOOL)hasColor;
- (BOOL)needsItemSource;
- (id)initForPresentation:(id)a0 identifier:(id)a1 extension:(id)a2 sharingService:(id)a3;

@end
