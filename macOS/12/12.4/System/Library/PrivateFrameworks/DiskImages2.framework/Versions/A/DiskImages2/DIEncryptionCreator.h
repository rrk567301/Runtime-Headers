@interface DIEncryptionCreator : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)CLIVerifyPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (BOOL)allowStoringInKeychain;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
