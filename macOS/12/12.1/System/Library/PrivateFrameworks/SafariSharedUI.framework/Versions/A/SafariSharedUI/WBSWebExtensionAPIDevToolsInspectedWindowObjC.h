@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsInspectedWindowObjC : WBSWebExtensionAPIObject

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onShown;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onHidden;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onSearch;

+ (id)inspectedWindowWithExtensionIdentifier:(id)a0 runtime:(id)a1;
+ (BOOL)_isValidOptionsDictionary:(id)a0 requiredKeys:(id)a1 optionalKeys:(id)a2 keyToExpectedValueType:(id)a3 apiName:(id)a4 outExceptionString:(id *)a5;

- (void).cxx_destruct;
- (void)evaluateExpression:(id)a0 options:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)reloadWithOptions:(id)a0 browserContextController:(id)a1 outExceptionString:(id *)a2;
- (double)tabIdWithBrowserContextController:(id)a0;

@end
