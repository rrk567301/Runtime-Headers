@interface DIEncryptionCreator : DIEncryptionFrontend

+ (char)supportsSecureCoding;

- (id)CLIVerifyPassphrasePrompt;
- (id)GUIPassphrasePrompt;
- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (char)allowStoringInKeychain;
- (char)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (char)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
