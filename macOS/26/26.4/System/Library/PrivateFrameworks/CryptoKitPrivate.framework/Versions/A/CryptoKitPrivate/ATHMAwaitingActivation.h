@class NSData, _TtC16CryptoKitPrivate10ATHMClient;

@interface ATHMAwaitingActivation : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10ATHMClient *client;
@property (readonly, retain, nonatomic) NSData *requestData;

+ (id)verifyAndGetKeyIDFromKeyCommitmentsData:(id)a0 numBuckets:(unsigned long long)a1 deploymentID:(id)a2;

- (void).cxx_destruct;
- (id)activateWithResponseData:(id)a0 error:(id *)a1;
- (id)initWithKeyCommitmentsData:(id)a0 nbuckets:(unsigned long long)a1 deploymentID:(id)a2 error:(id *)a3;

@end
