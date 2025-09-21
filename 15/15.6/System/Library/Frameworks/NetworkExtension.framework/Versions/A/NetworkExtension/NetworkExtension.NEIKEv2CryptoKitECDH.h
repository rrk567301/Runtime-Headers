@class NSData;

@interface NetworkExtension.NEIKEv2CryptoKitECDH : NSObject {
    void /* unknown type, empty encoding */ internalSharedSecret;
    void /* unknown type, empty encoding */ keyExchangeData;
}

@property (nonatomic, readonly) NSData *keyExchangeData;
@property (nonatomic, readonly) NSData *sharedSecret;

- (id)init;
- (void).cxx_destruct;
- (char)processPeerPayload:(id)a0 error:(id *)a1;

@end
