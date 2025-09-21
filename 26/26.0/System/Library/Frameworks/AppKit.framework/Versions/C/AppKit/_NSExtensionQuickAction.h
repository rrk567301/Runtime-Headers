@class NSSharingService, NSString, NSDictionary, NSURL;

@interface _NSExtensionQuickAction : _NSQuickAction {
    NSDictionary *_extensionAttributes;
    NSURL *_bundleURL;
}

@property (readonly) NSSharingService *_sharingService;
@property (readonly, copy) NSString *_extensionIdentifier;

+ (id)quickActionForPresentation:(id)a0 extension:(id)a1;

- (BOOL)hasIcon;
- (id)_bundleURL;
- (long long)type;
- (id)init;
- (id)title;
- (void).cxx_destruct;
- (BOOL)needsItemSource;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (BOOL)canMoveToTrash;
- (BOOL)hasColor;
- (id)initForPresentation:(id)a0 identifier:(id)a1 extension:(id)a2 sharingService:(id)a3;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithItemSource:(id)a0;

@end
