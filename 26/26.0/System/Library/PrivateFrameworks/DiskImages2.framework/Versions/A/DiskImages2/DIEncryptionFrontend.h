@class NSUUID, DIBaseParams, NSString;

@interface DIEncryptionFrontend : NSObject <NSSecureCoding, NSCoding> {
    struct optional<crypto::auth_table> { union { char __null_state_; struct auth_table { struct vector<crypto::auth_entry_descriptor, std::allocator<crypto::auth_entry_descriptor>> { struct auth_entry_descriptor *__begin_; struct auth_entry_descriptor *__end_; struct auth_entry_descriptor *__cap_; } descriptors; struct shared_ptr<crypto::auth_table_reader_t> { struct auth_table_reader_t *__ptr_; struct __shared_weak_count *__cntrl_; } reader; } __val_; } ; BOOL __engaged_; } auth_table;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DIBaseParams *diParams;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (nonatomic) BOOL allowStoringInKeychain;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) NSString *GUIPassphrasePromptCreate;
@property (readonly, copy, nonatomic) NSString *GUIPassphrasePromptUnlock;
@property (readonly, copy, nonatomic) NSString *GUIPassphraseLabelCreate;
@property (readonly, copy, nonatomic) NSString *GUIPassphraseLabelUnlock;
@property (readonly, copy, nonatomic) NSString *GUIVerifyPassphraseLabelCreate;
@property (readonly, copy, nonatomic) NSString *CLIPassphrasePromptCreate;
@property (readonly, copy, nonatomic) NSString *CLIPassphrasePromptUnlock;
@property (readonly, copy, nonatomic) NSString *CLIVerifyPassphrasePromptCreate;

+ (BOOL)hasGUIaccess;
+ (BOOL)updateSystemKeychainAttrWithDict:(id)a0 isStoring:(BOOL)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithParams:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)GUIAskForPassphraseWithPassphraseUsage:(long long)a0 error:(id *)a1;
- (BOOL)checkAuthEntriesWithHasPassphraseEntry:(BOOL *)a0 hasPublicKeyEntry:(BOOL *)a1 error:(id *)a2;
- (BOOL)addPassphraseEntryWithXpcHandler:(id)a0 flags:(unsigned long long)a1 usage:(long long)a2 error:(id *)a3;
- (BOOL)askPermissionWithRememberPassword:(BOOL *)a0 error:(id *)a1;
- (BOOL)checkWithHasIcloudKeychain:(BOOL *)a0 error:(id *)a1;
- (BOOL)checkWithItemRef:(struct __SecKeychainItem { } *)a0 isSystemKeychain:(BOOL *)a1 error:(id *)a2;
- (BOOL)consoleAskForPassphraseWithUseStdin:(BOOL)a0 usage:(long long)a1 error:(id *)a2;
- (void *)generateAuthTableWithError:(id *)a0;
- (id)getCertificateWithCertificatePath:(id)a0 error:(id *)a1;
- (id)getCertificateWithPublicKey:(id)a0 error:(id *)a1;
- (struct expected<crypto::crypto_serializer_t, std::error_code> { struct __conditional_no_unique_address<true, std::__expected_base<crypto::crypto_serializer_t, std::error_code>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<crypto::crypto_serializer_t, std::error_code>::__union_t> { union __union_t { struct crypto_serializer_t { void /* function */ **x0; struct interval_set<unsigned long long, std::less, boost::icl::discrete_interval<unsigned long long>, std::allocator> { struct set<boost::icl::discrete_interval<unsigned long long>, boost::icl::exclusive_less_than<boost::icl::discrete_interval<unsigned long long>>, std::allocator<boost::icl::discrete_interval<unsigned long long>>> { struct __tree<boost::icl::discrete_interval<unsigned long long>, boost::icl::exclusive_less_than<boost::icl::discrete_interval<unsigned long long>>, std::allocator<boost::icl::discrete_interval<unsigned long long>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x0; } x1; struct format *x2; struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } x3; } x0; struct error_code { int x0; struct error_category *x1; } x1; } x0; } x0; BOOL x1; } x0; } x0; })getSerializerWithAuthTable:(void *)a0;
- (BOOL)keychainUnlockWithError:(id *)a0;
- (BOOL)keychainUnlockWithIsSystemKeychain:(BOOL)a0 error:(id *)a1;
- (BOOL)lookupLegacyKeychainWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)storeInKeychainWithPassphrase:(id)a0 forceSystemKeychain:(BOOL)a1 error:(id *)a2;
- (BOOL)unlockUsingPublicKeyWithError:(id *)a0;
- (BOOL)unlockUsingSaksWithError:(id *)a0;
- (BOOL)unlockUsingSymmetricKeyWithError:(id *)a0;
- (BOOL)unlockWithPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)unlockWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)updateDiskImageParamsWithFrontend:(id)a0 error:(id *)a1;
- (BOOL)validateDeserializationWithError:(id *)a0;

@end
