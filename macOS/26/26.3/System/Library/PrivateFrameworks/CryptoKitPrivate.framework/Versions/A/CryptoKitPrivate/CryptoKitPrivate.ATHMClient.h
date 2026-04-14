@interface CryptoKitPrivate.ATHMClient : NSObject {
    void /* unknown type, empty encoding */ client;
}

- (id)request;
- (id)init;
- (void).cxx_destruct;
- (id)deploymentID;
- (id)finalizeWithResponseData:(id)a0 nbuckets:(long long)a1 error:(id *)a2;
- (id)initWithKeyCommitmentsData:(id)a0 numBuckets:(long long)a1 deploymentID:(id)a2 error:(id *)a3;
- (long long)numBuckets;

@end
