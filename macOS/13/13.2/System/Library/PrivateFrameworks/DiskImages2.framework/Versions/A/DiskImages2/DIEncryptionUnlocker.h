@interface DIEncryptionUnlocker : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)GUIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)CLIPassphrasePrompt;
- (BOOL)keychainUnlockWithIsSystemKeychain:(BOOL)a0 error:(id *)a1;
- (BOOL)keychainUnlockWithError:(id *)a0;
- (BOOL)checkWithItemRef:(struct __SecKeychainItem { } *)a0 isSystemKeychain:(BOOL *)a1 error:(id *)a2;
- (BOOL)lookupLegacyKeychainWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)tryUnlockUsingSaksWithHasSaksKey:(BOOL *)a0 error:(id *)a1;
- (BOOL)unlockWithXpcHandler:(id)a0 error:(id *)a1;

@end
