@class NSData, _TtC16CryptoKitPrivate28ARCAwaitingActivationWrapper;

@interface ARCAwaitingActivation : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate28ARCAwaitingActivationWrapper *precredential;
@property (readonly, retain, nonatomic) NSData *requestData;

- (void).cxx_destruct;
- (id)activateWithResponseData:(id)a0 error:(id *)a1;
- (id)initWithRequestContext:(id)a0 serverPublicKey:(id)a1 error:(id *)a2;

@end
