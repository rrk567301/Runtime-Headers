@class AMSMescalSession;
@protocol AMSBagProtocol;

@interface AMSMescalAccountPrimeSession : NSObject

@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSMescalSession *session;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (id)verifyPrimeSignature:(id)a0;
- (id)primeSignatureForData:(id)a0;
- (id)signData:(id)a0;

@end
