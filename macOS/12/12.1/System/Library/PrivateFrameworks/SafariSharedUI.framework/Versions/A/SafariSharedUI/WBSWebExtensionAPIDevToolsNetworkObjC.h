@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIDevToolsNetworkObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onNavigated;
    WBSWebExtensionAPIEventObjC *_onRequestFinished;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onNavigated;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onRequestFinished;

+ (id)networkWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)getHARWithCompletionHandler:(id)a0 outExceptionString:(id *)a1;

@end
