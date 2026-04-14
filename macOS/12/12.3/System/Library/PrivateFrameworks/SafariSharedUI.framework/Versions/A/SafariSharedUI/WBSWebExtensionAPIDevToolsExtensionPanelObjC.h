@class NSString, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsExtensionPanelObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {
    WBSWebExtensionAPIEventObjC *_onShown;
    WBSWebExtensionAPIEventObjC *_onHidden;
    WBSWebExtensionAPIEventObjC *_onSearch;
    NSString *_inspectorTabID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct OpaqueJSValue { } *)translateToJSValueWithJSContext:(struct OpaqueJSContext { } *)a0;

@end
