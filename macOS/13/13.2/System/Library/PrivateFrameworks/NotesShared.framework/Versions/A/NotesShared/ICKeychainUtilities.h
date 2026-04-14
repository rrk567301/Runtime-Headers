@interface ICKeychainUtilities : NSObject

+ (id)itemForObject:(id)a0;
+ (id)validatedItemForObject:(id)a0;
+ (BOOL)faceIDNotesSettingEnabledForAccountID:(id)a0;
+ (void)setFaceIDEnabled:(BOOL)a0 forAccountID:(id)a1;
+ (BOOL)touchIDNotesSettingEnabledForAccountID:(id)a0;
+ (void)setTouchIDEnabled:(BOOL)a0 forAccountID:(id)a1;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)a0;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)a0 checkPolicyDomainState:(BOOL)a1;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)a0 strict:(BOOL)a1;
+ (BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)a0 strict:(BOOL)a1 checkPolicyDomainState:(BOOL)a2;
+ (BOOL)touchIDEnabledForSharedPasswordForAccountIDs:(id)a0 strict:(BOOL)a1;
+ (BOOL)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)a0 forIdentifier:(id)a1 accountID:(id)a2 error:(id *)a3;
+ (BOOL)addDevicePasscodeGuardedItem:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
+ (BOOL)addAccountToBiometricID:(id)a0;
+ (BOOL)addNoteToBiometricID:(id)a0;
+ (id)touchIDEnabledKeyForAccountID:(id)a0;
+ (id)faceIDEnabledKeyForAccountID:(id)a0;
+ (BOOL)removeAllFromBiometricID;
+ (void)removeNoteFromBiometricID:(id)a0;
+ (void)removeAccountFromBiometricID:(id)a0 andRemoveNotes:(BOOL)a1;

@end
