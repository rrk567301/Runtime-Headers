@class _TtC16CryptoKitPrivate10KVACClient, NSData, _TtC16CryptoKitPrivate18KVACRequestWrapper;

@interface KVACAwaitingActivation : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10KVACClient *client;
@property (readonly, nonatomic) _TtC16CryptoKitPrivate18KVACRequestWrapper *request;
@property (readonly, retain, nonatomic) NSData *requestData;

- (void).cxx_destruct;
- (id)activateWithIssuanceData:(id)a0 error:(id *)a1;
- (id)initWithTokenChallenge:(id)a0 error:(id *)a1;

@end
