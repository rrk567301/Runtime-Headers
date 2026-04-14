@class ExtensionWebsiteAccess, NSString, NSUUID, AppExtensionContextMenu, AppExtensionToolbarItem;

@interface SafariAppExtensionData : WBSSafariExtension {
    NSString *_localizedDisplayName;
    NSUUID *_baseURIHost;
}

@property (retain, nonatomic) ExtensionWebsiteAccess *websiteAccess;
@property (retain, nonatomic) AppExtensionToolbarItem *toolbarItem;
@property (retain, nonatomic) AppExtensionContextMenu *contextMenu;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithExtension:(id)a0;
- (id)defaultWebsiteDataStore;
- (id)baseURIHost;

@end
