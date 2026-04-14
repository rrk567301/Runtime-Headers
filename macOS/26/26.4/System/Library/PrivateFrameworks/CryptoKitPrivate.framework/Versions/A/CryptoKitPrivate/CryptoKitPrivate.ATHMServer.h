@interface CryptoKitPrivate.ATHMServer : NSObject {
    void /* unknown type, empty encoding */ server;
}

- (id)deploymentID;
- (void).cxx_destruct;
- (id)init;
- (id)exportKeyCommitmentsAndReturnError:(id *)a0;
- (id)initWithNumBuckets:(long long)a0 deploymentID:(id)a1;
- (long long)numBuckets;
- (long long)readMetadataWithPresentationData:(id)a0 nbuckets:(long long)a1;
- (id)respondWithRequestData:(id)a0 metadata:(long long)a1 nbuckets:(long long)a2 error:(id *)a3;

@end
