@interface DIEncryptionCreator : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)GUIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (id)CLIPassphrasePrompt;
- (id)CLIVerifyPassphrasePrompt;
- (BOOL)allowStoringInKeychain;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;

@end
