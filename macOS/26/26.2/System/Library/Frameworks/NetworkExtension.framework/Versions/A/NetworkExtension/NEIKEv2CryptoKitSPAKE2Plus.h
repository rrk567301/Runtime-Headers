@class NSData;

@interface NEIKEv2CryptoKitSPAKE2Plus : NSObject {
    void /* function */ keyShare;
}

@property (nonatomic, readonly) NSData *keyShare;

+ (id)createForInitiator:(BOOL)a0 seed:(id)a1 initiatorID:(id)a2 responderID:(id)a3 salt:(id)a4 context:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)init;
- (id)processSecondPeerMessage:(id)a0 error:(id *)a1;
- (id)initWithKeyShare:(id)a0;
- (id)processFirstPeerMessage:(id)a0 error:(id *)a1;

@end
