@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsExtensionSidebarPaneObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onShown;
    WBSWebExtensionAPIEventObjC *_onHidden;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onShown;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onHidden;

+ (id)extensionSidebarPaneWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)setSourceURL:(id)a0 outExceptionString:(id *)a1;
- (void)setExpression:(id)a0 rootTitle:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)setObject:(id)a0 rootTitle:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;

@end
