@class NSString, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsExtensionPanelObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {
    WBSWebExtensionAPIEventObjC *_onShown;
    WBSWebExtensionAPIEventObjC *_onHidden;
    WBSWebExtensionAPIEventObjC *_onSearch;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, copy, nonatomic) NSString *inspectorTabID;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onShown;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onHidden;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionPanelWithExtensionIdentifier:(id)a0 inspectorTabID:(id)a1 runtime:(id)a2;

- (void).cxx_destruct;
- (struct OpaqueJSValue { } *)translateToJSValueWithJSContext:(struct OpaqueJSContext { } *)a0;
- (void)setInspectorTabID:(id)a0;

@end
