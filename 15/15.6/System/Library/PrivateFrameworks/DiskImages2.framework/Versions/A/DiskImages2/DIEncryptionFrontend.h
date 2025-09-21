@class NSUUID, DIBaseParams, NSString;

@interface DIEncryptionFrontend : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) DIBaseParams *diParams;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (nonatomic) char allowStoringInKeychain;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) NSString *GUIPassphrasePrompt;
@property (readonly, copy, nonatomic) NSString *GUIPassphraseLabel;
@property (readonly, copy, nonatomic) NSString *GUIVerifyPassphraseLabel;
@property (readonly, copy, nonatomic) NSString *CLIPassphrasePrompt;
@property (readonly, copy, nonatomic) NSString *CLIVerifyPassphrasePrompt;

+ (char)hasGUIaccess;
+ (char)updateSystemKeychainAttrWithDict:(id)a0 isStoring:(char)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParams:(id)a0;
- (char)GUIAskForPassphraseWithError:(id *)a0;
- (char)askPermissionWithRememberPassword:(char *)a0 error:(id *)a1;
- (char)checkWithHasIcloudKeychain:(char *)a0 error:(id *)a1;
- (char)consoleAskForPassphraseWithUseStdin:(char)a0 error:(id *)a1;
- (id)getCertificateWithCertificatePath:(id)a0 error:(id *)a1;
- (id)getCertificateWithPublicKey:(id)a0 error:(id *)a1;
- (char)storeInKeychainWithPassphrase:(id)a0 forceSystemKeychain:(char)a1 error:(id *)a2;
- (char)updateDiskImageParamsWithFrontend:(id)a0 error:(id *)a1;
- (char)validateDeserializationWithError:(id *)a0;

@end
