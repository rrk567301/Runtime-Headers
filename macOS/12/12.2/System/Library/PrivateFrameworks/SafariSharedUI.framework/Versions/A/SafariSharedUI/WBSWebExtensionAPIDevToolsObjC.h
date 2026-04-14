@class WBSWebExtensionAPIDevToolsNetworkObjC, WBSWebExtensionAPIDevToolsPanelsObjC, WBSWebExtensionAPIDevToolsInspectedWindowObjC;

@interface WBSWebExtensionAPIDevToolsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIDevToolsInspectedWindowObjC *_inspectedWindow;
    WBSWebExtensionAPIDevToolsNetworkObjC *_network;
    WBSWebExtensionAPIDevToolsPanelsObjC *_panels;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIDevToolsInspectedWindowObjC *inspectedWindow;
@property (readonly, nonatomic) WBSWebExtensionAPIDevToolsNetworkObjC *network;
@property (readonly, nonatomic) WBSWebExtensionAPIDevToolsPanelsObjC *panels;

+ (id)devToolsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;

@end
