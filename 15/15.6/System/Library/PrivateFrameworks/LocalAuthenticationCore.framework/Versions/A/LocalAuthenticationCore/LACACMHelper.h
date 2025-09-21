@class NSData;

@interface LACACMHelper : NSObject {
    char _contextOwner;
}

@property (nonatomic) struct __ACMHandle { } *acmContext;
@property (readonly, nonatomic) unsigned int acmTrackingNumber;
@property (readonly, nonatomic) NSData *externalizedContext;

+ (long long)_errorCodeFromACMStatus:(int)a0;
+ (id)createACMContext;
+ (id)createPreboardBatchControl;
+ (id)createUPPControlForTeamID:(id)a0;
+ (id)ratchetStatusWithConfig:(id *)a0;

- (void)dealloc;
- (id)initWithExternalizedContext:(id)a0;
- (char)addExtractablePassphrase:(id)a0 scope:(unsigned int)a1 error:(id *)a2;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (char)performContextBlock:(id /* block */)a0 error:(id *)a1;
- (char)performCredentialBlock:(id /* block */)a0 credentialType:(unsigned int)a1 error:(id *)a2;
- (char)setData:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (id)exchangeControlData:(id)a0 error:(id *)a1;
- (id)initAndCreateContext;
- (char)setVariable:(unsigned int)a0 value:(id)a1 error:(id *)a2;

@end
