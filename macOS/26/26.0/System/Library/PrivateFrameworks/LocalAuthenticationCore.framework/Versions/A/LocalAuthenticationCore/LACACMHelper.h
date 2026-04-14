@class NSData;

@interface LACACMHelper : NSObject {
    long long _ownership;
}

@property (nonatomic) struct __ACMHandle { } *acmContext;
@property (readonly, nonatomic) unsigned int acmTrackingNumber;
@property (readonly, nonatomic) NSData *externalizedContext;

+ (char *)acmPolicyForPolicy:(long long)a0;
+ (id)boolEnvironmentVariable:(unsigned int)a0;
+ (id)catacombUUID:(id)a0;
+ (id)createPreboardBatchControl;
+ (id)createUPPControlForTeamID:(id)a0;
+ (id)decodeData:(id)a0 seed:(id)a1 externalizedContext:(id)a2 error:(id *)a3;
+ (id)encodeData:(id)a0 seed:(id)a1 externalizedContext:(id)a2 error:(id *)a3;
+ (void)notifyBiometricMatchOperationStartAttempted;
+ (id)requirement:(struct __ACMRequirement { } *)a0 dataProperty:(unsigned int)a1;
+ (BOOL)requirement:(struct __ACMRequirement { } *)a0 hasFlag:(unsigned long long)a1 andType:(unsigned int)a2;
+ (BOOL)requirement:(struct __ACMRequirement { } *)a0 hasState:(unsigned int)a1 andType:(unsigned int)a2;
+ (id)requirement:(struct __ACMRequirement { } *)a0 uint32Property:(unsigned int)a1;

- (void)clear;
- (void)dealloc;
- (id)initWithExternalizedContext:(id)a0;
- (id)init;
- (BOOL)_verifyRequirement:(struct __ACMRequirement { } *)a0 satisfiedForType:(unsigned int)a1 present:(BOOL *)a2 flags:(unsigned int *)a3;
- (BOOL)addCredential:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)addCredential:(unsigned int)a0 scope:(unsigned int)a1 property:(unsigned int)a2 data:(id)a3 error:(id *)a4;
- (id)dataWithType:(unsigned int)a0 encoded:(BOOL)a1 error:(id *)a2;
- (id)dataWithType:(unsigned int)a0 error:(id *)a1;
- (id)exchangeControlData:(id)a0 error:(id *)a1;
- (BOOL)hasDataWithType:(unsigned int)a0 error:(id *)a1;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (BOOL)isCredentialOfTypeSet:(unsigned int)a0 error:(id *)a1;
- (id)missingACMContextError;
- (BOOL)performContextBlock:(id /* block */)a0 error:(id *)a1;
- (void)performContextVerificationWithParameters:(id)a0 block:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)performCredentialBlock:(id /* block */)a0 credentialType:(unsigned int)a1 error:(id *)a2;
- (id)performDataContextBlock:(id /* block */)a0 error:(id *)a1;
- (void)preflightPolicy:(char *)a0 parameters:(id)a1 maxGlobalCredentialAge:(unsigned int)a2 processRequirement:(id /* block */)a3;
- (BOOL)removeCredentialsOfType:(unsigned int)a0 error:(id *)a1;
- (BOOL)replacePassphraseCredentialWithPurpose:(unsigned int)a0 passphrase:(id)a1 scope:(unsigned int)a2 error:(id *)a3;
- (BOOL)setData:(id)a0 type:(unsigned int)a1 encoded:(BOOL)a2 error:(id *)a3;
- (BOOL)setData:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (BOOL)setSecretForPasscodeStash:(id)a0 error:(id *)a1;
- (BOOL)setVariable:(unsigned int)a0 value:(id)a1 error:(id *)a2;
- (void)verifyAclConstraint:(id)a0 operation:(id)a1 preflight:(BOOL)a2 parameters:(id)a3 maxGlobalCredentialAge:(unsigned int)a4 processRequirement:(id /* block */)a5;
- (void)verifyPolicy:(char *)a0 preflight:(BOOL)a1 parameters:(id)a2 maxGlobalCredentialAge:(unsigned int)a3 processRequirement:(id /* block */)a4;
- (BOOL)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 error:(id *)a2;
- (BOOL)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 mustBePresent:(BOOL)a2 parameters:(id)a3 flags:(unsigned int *)a4 error:(id *)a5;

@end
