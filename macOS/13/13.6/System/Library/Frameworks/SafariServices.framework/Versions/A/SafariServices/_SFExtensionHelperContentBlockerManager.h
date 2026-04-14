@interface _SFExtensionHelperContentBlockerManager : NSObject

+ (BOOL)contentBlockerIsEnabled:(id)a0 developerIdentifier:(id)a1;
+ (void)requestReloadOfContentBlocker:(id)a0 developerIdentifier:(id)a1;
+ (void)requestReloadOfContentBlocker:(id)a0 developerIdentifier:(id)a1 reply:(id /* block */)a2;

@end
