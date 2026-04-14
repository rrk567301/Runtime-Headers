@class ExtensionWebsiteAccess, NSString, AppExtensionContextMenu, AppExtensionToolbarItem;

@interface SafariAppExtensionData : WBSSafariExtension {
    NSString *_localizedDisplayName;
}

@property (retain, nonatomic) ExtensionWebsiteAccess *websiteAccess;
@property (retain, nonatomic) AppExtensionToolbarItem *toolbarItem;
@property (retain, nonatomic) AppExtensionContextMenu *contextMenu;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithExtension:(id)a0;
- (id)defaultWebsiteDataStore;

@end
