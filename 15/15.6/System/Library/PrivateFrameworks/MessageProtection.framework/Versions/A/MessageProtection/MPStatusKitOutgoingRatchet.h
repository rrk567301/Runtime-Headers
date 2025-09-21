@class _TtC17MessageProtection17SKOutgoingRatchet;

@interface MPStatusKitOutgoingRatchet : NSObject

@property (retain, nonatomic) _TtC17MessageProtection17SKOutgoingRatchet *ratchet;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)serializedData;
- (id)currentSubscriptionKeys;
- (char)ratchetForward;
- (id)sealStatus:(id)a0 authenticating:(id)a1 error:(id *)a2;
- (id)signingKeyIdentifier;

@end
