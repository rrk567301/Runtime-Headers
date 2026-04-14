@class NSData, NSUUID;

@interface Rapport.RPPairingBonjourResolveResponse : NSObject {
    void /* function */ serverPublicKey;
    void /* unknown type, empty encoding */ bonjourServiceID;
}

@property (nonatomic, readonly) NSData *serverPublicKey;
@property (nonatomic, readonly) NSUUID *bonjourServiceID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServerPublicKey:(id)a0 bonjourServiceID:(id)a1;

@end
