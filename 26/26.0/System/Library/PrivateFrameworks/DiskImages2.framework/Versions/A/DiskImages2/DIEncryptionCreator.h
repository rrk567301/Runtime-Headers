@class DICreateParams;

@interface DIEncryptionCreator : DIEncryptionFrontend

@property (retain, nonatomic) DICreateParams *createParams;

+ (BOOL)supportsSecureCoding;
+ (id)getPublicKeyWithCertificate:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)addPublicKeyEntryWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)addSymmetricKeyEntryWithError:(id *)a0;
- (BOOL)allowStoringInKeychain;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
