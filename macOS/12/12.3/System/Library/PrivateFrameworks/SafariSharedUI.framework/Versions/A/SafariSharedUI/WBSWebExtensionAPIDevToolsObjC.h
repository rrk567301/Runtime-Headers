@class WBSWebExtensionAPIDevToolsNetworkObjC, WBSWebExtensionAPIDevToolsPanelsObjC, WBSWebExtensionAPIDevToolsInspectedWindowObjC;

@interface WBSWebExtensionAPIDevToolsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIDevToolsInspectedWindowObjC *_inspectedWindow;
    WBSWebExtensionAPIDevToolsNetworkObjC *_network;
    WBSWebExtensionAPIDevToolsPanelsObjC *_panels;
}

- (void).cxx_destruct;

@end
