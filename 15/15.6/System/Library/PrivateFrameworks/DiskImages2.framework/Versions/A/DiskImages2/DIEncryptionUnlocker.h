@interface DIEncryptionUnlocker : DIEncryptionFrontend

+ (char)supportsSecureCoding;

- (id)GUIPassphrasePrompt;
- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (char)checkWithItemRef:(struct __SecKeychainItem { } *)a0 isSystemKeychain:(char *)a1 error:(id *)a2;
- (char)keychainUnlockWithError:(id *)a0;
- (char)keychainUnlockWithIsSystemKeychain:(char)a0 error:(id *)a1;
- (char)lookupLegacyKeychainWithXpcHandler:(id)a0 error:(id *)a1;
- (char)tryUnlockUsingSaksWithHasSaksKey:(BOOL *)a0 error:(id *)a1;
- (char)unlockWithXpcHandler:(id)a0 error:(id *)a1;

@end
