@interface CryptoKitPrivate.KVACClient : NSObject {
    void /* unknown type, empty encoding */ client;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithTokenChallenge:(id)a0 error:(id *)a1;
- (id)makeCredentialWithIssuance:(id)a0 request:(id)a1 error:(id *)a2;
- (id)makeRequestAndReturnError:(id *)a0;

@end
