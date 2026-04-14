@class WBSWebExtensionAPIDevToolsElementsPanelObjC, WBSWebExtensionAPIEventObjC, NSMutableDictionary;

@interface WBSWebExtensionAPIDevToolsPanelsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIDevToolsElementsPanelObjC *_elementsPanel;
    WBSWebExtensionAPIEventObjC *_onThemeChanged;
    NSMutableDictionary *_extensionPanelMap;
}

- (void).cxx_destruct;

@end
