@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsElementsPanelObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onSelectionChanged;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onSelectionChanged;

+ (id)elementsPanelWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)createSidebarPaneWithTitle:(id)a0 completionHandler:(id)a1 outExceptionString:(id *)a2;

@end
