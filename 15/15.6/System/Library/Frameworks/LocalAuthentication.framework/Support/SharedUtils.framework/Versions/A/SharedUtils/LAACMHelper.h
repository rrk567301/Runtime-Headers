@interface LAACMHelper : NSObject {
    char _contextOwner;
}

@property (readonly, nonatomic) unsigned int acmTrackingNumber;
@property (readonly, nonatomic) struct __ACMHandle { } *acmContext;

+ (char *)acmPolicyForPolicy:(long long)a0;
+ (id)boolEnvironmentVariable:(unsigned int)a0;
+ (id)catacombUUID:(id)a0;
+ (void)notifyBiometricMatchOperationStartAttempted;
+ (id)requirement:(struct __ACMRequirement { } *)a0 dataProperty:(unsigned int)a1;
+ (char)requirement:(struct __ACMRequirement { } *)a0 hasFlag:(unsigned long long)a1 andType:(unsigned int)a2;
+ (char)requirement:(struct __ACMRequirement { } *)a0 hasState:(unsigned int)a1 andType:(unsigned int)a2;
+ (id)requirement:(struct __ACMRequirement { } *)a0 uint32Property:(unsigned int)a1;
+ (char)resetRatchet:(id *)a0;

- (void)dealloc;
- (void)clear;
- (id)initWithExternalizedContext:(id)a0;
- (char)_verifyRequirement:(struct __ACMRequirement { } *)a0 satisfiedForType:(unsigned int)a1 present:(char *)a2 flags:(unsigned int *)a3;
- (char)addCredential:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (char)addCredential:(unsigned int)a0 scope:(unsigned int)a1 property:(unsigned int)a2 data:(id)a3 error:(id *)a4;
- (char)addExtractablePassphrase:(id)a0 scope:(unsigned int)a1 error:(id *)a2;
- (id)credentialOfType:(unsigned int)a0 property:(unsigned int)a1 error:(id *)a2;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (char)isCredentialOfTypeSet:(unsigned int)a0 error:(id *)a1;
- (id)missingACMContextError;
- (char)performContextBlock:(id /* block */)a0 error:(id *)a1;
- (void)performContextVerificationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (char)performCredentialBlock:(id /* block */)a0 credentialType:(unsigned int)a1 error:(id *)a2;
- (void)preflightPolicy:(char *)a0 parameters:(const struct { unsigned int x0; void *x1; unsigned int x2; } *)a1 parametersCount:(unsigned int)a2 maxGlobalCredentialAge:(unsigned int)a3 processRequirement:(id /* block */)a4;
- (char)removeCredentialsOfType:(unsigned int)a0 error:(id *)a1;
- (char)replacePassphraseCredentialWithPurpose:(unsigned int)a0 passphrase:(id)a1 scope:(unsigned int)a2 error:(id *)a3;
- (char)setData:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (void)verifyAclConstraint:(id)a0 operation:(id)a1 preflight:(char)a2 parameters:(const struct { unsigned int x0; void *x1; unsigned int x2; } *)a3 parametersCount:(unsigned int)a4 maxGlobalCredentialAge:(unsigned int)a5 processRequirement:(id /* block */)a6;
- (void)verifyPolicy:(char *)a0 preflight:(char)a1 parameters:(const struct { unsigned int x0; void *x1; unsigned int x2; } *)a2 parametersCount:(unsigned int)a3 maxGlobalCredentialAge:(unsigned int)a4 processRequirement:(id /* block */)a5;
- (char)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 error:(id *)a2;
- (char)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 mustBePresent:(char)a2 parameter:(id)a3 flags:(unsigned int *)a4 error:(id *)a5;

@end
