@interface DIEncryptionChpass : DIEncryptionFrontend

@property (nonatomic) struct shared_ptr<crypto::passphrase_header> { struct passphrase_header *__ptr_; struct __shared_weak_count *__cntrl_; } passEntryToChange;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithParams:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)GUIAskForPassphraseWithPassphraseUsage:(long long)a0 error:(id *)a1;
- (BOOL)allowStoringInKeychain;
- (BOOL)consoleAskForPassphraseWithUseStdin:(BOOL)a0 usage:(long long)a1 error:(id *)a2;
- (BOOL)replacePassWithXpcHandler:(id)a0 params:(id)a1 error:(id *)a2;
- (BOOL)replacePassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)unlockWithPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)updateDiskImageParamsWithFrontend:(id)a0 error:(id *)a1;

@end
