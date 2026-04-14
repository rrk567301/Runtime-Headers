@class NSData, _TtC16CryptoKitPrivate10ATHMServer;

@interface ATHMTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10ATHMServer *server;
@property (readonly, retain, nonatomic) NSData *keyCommitmentsData;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (long long)readMetadataWithPresentationData:(id)a0 nbuckets:(long long)a1 error:(id *)a2;
- (id)respondWithRequestData:(id)a0 metadata:(long long)a1 nbuckets:(long long)a2 error:(id *)a3;

@end
