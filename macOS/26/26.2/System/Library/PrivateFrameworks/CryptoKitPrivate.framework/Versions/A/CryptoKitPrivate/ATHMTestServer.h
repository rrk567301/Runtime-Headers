@class NSData, _TtC16CryptoKitPrivate10ATHMServer;

@interface ATHMTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10ATHMServer *server;
@property (readonly, retain, nonatomic) NSData *keyCommitmentsData;

- (void).cxx_destruct;
- (id)initWithNumBuckets:(unsigned long long)a0 deploymentID:(id)a1 error:(id *)a2;
- (long long)readMetadataWithPresentationData:(id)a0 nbuckets:(unsigned long long)a1 error:(id *)a2;
- (id)respondWithRequestData:(id)a0 metadata:(unsigned long long)a1 error:(id *)a2;

@end
