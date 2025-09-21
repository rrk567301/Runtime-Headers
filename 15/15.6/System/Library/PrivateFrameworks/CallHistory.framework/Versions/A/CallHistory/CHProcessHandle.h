@interface CHProcessHandle : BSProcessHandle

@property (readonly) char hasDataStoreReadOnlyEntitlement;
@property (readonly) char hasDataStoreReadWriteEntitlement;
@property (readonly) char hasDataVaultEntitlement;
@property (readonly) char hasAppProtectionReadEntitlement;
@property (readonly) char hasCloudSyncEntitlement;

+ (id)processHandle;

@end
