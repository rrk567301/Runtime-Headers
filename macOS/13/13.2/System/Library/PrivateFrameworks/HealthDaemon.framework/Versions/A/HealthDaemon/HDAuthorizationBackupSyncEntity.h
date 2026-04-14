@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity

+ (id)syncEntityIdentifier;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)excludedSyncStoresForSession:(id)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (id)createCodableSourceAuthorizationWithSource:(id)a0 syncSession:(id)a1;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)a0;
+ (void)setAuthorizationBackupPushIdentifier:(id)a0 syncStore:(id)a1;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)a0;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)a0;
+ (void)resetAuthorizationBackupIdentifiers;
+ (id)backupInfoUserDefaultsKey;

@end
