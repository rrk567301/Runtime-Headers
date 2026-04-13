@class WBSWebExtensionAPIDevToolsElementsPanelObjC, WBSWebExtensionAPIEventObjC, NSMutableDictionary;

@interface WBSWebExtensionAPIDevToolsPanelsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIDevToolsElementsPanelObjC *_elementsPanel;
    WBSWebExtensionAPIEventObjC *_onThemeChanged;
    NSMutableDictionary *_extensionPanelMap;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIDevToolsElementsPanelObjC *elements;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onThemeChanged;

+ (id)devToolsPanelsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)createNewTabWithTitle:(id)a0 iconPath:(id)a1 pagePath:(id)a2 browserContextController:(id)a3 completionHandler:(id)a4 outExceptionString:(id *)a5;
- (id)themeNameWithBrowserContextController:(id)a0;
- (id)extensionPanelWithIdentifier:(id)a0;

@end
