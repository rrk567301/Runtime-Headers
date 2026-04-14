@interface MADAutoAssetAuthorizationPolicy : NSObject

+ (BOOL)isConnectionAuthorized:(id)a0;
+ (BOOL)isConnection:(id)a0 authorizedForMessage:(id)a1;
+ (BOOL)_accessibleAssetTypes:(id)a0 containsAssetType:(id)a1;
+ (id)_allowListedAutoAssetTypes;
+ (id)authorizationAssetTypeFromMessage:(id)a0 alreadyOnStateQueue:(BOOL)a1;
+ (id)issueSandboxExtensionForAuditToken:(struct { unsigned int x0[8]; })a0 path:(id)a1;

@end
