@class NSData, _TtC16CryptoKitPrivate22ARCPresentationWrapper;

@interface ARCPresentation : NSObject

@property (readonly, retain, nonatomic) _TtC16CryptoKitPrivate22ARCPresentationWrapper *presentation;
@property (readonly, retain, nonatomic) NSData *presentationData;
@property (readonly, nonatomic) unsigned long long nonce;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 presentationContext:(id)a1 presentationLimit:(unsigned long long)a2 error:(id *)a3;

@end
