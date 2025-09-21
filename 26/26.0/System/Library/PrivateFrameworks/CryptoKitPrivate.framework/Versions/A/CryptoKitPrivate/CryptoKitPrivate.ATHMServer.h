@interface CryptoKitPrivate.ATHMServer : NSObject {
    void /* unknown type, empty encoding */ server;
}

- (id)init;
- (void).cxx_destruct;
- (id)exportKeyCommitmentsAndReturnError:(id *)a0;
- (long long)readMetadataWithPresentationData:(id)a0 nbuckets:(long long)a1;
- (id)respondWithRequestData:(id)a0 metadata:(long long)a1 nbuckets:(long long)a2 error:(id *)a3;

@end
