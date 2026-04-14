@class NSExtension, ExtensionWebsiteAccess, NSString, NSUUID, AppExtensionContextMenu, AppExtensionToolbarItem;

@interface SafariAppExtensionData : WBSSafariExtension {
    NSString *_localizedDisplayName;
    NSUUID *_baseURIHost;
}

@property (retain, nonatomic) ExtensionWebsiteAccess *websiteAccess;
@property (retain, nonatomic) AppExtensionToolbarItem *toolbarItem;
@property (retain, nonatomic) AppExtensionContextMenu *contextMenu;
@property (readonly, nonatomic) NSExtension *extension;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)displayName;
- (void)unload;
- (id)baseURIHost;
- (id)initWithExtension:(id)a0 extensionsController:(id)a1;

@end
