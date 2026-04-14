@class _TtC16CryptoKitPrivate20ARCCredentialWrapper;

@interface ARCCredential : NSObject

@property (readonly, retain, nonatomic) _TtC16CryptoKitPrivate20ARCCredentialWrapper *credential;

- (void).cxx_destruct;
- (id)getCredentialDataError:(id *)a0;
- (long long)getRemainingPresentationCountWithPresentationContext:(id)a0 presentationLimit:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)initWithCredentialResponseData:(id)a0 precredential:(id)a1 error:(id *)a2;
- (id)presentWithPresentationContext:(id)a0 presentationLimit:(unsigned long long)a1 error:(id *)a2;

@end
