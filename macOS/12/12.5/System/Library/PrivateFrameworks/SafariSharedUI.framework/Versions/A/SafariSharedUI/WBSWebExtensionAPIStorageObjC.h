@class WBSWebExtensionAPIStorageAreaObjC, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIStorageObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIStorageAreaObjC *_local;
    WBSWebExtensionAPIStorageAreaObjC *_sync;
    WBSWebExtensionAPIEventObjC *_onChanged;
}

- (void).cxx_destruct;

@end
