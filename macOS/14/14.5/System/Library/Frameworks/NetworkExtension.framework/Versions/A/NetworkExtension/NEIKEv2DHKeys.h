@class NSData, _TtC16NetworkExtension20NEIKEv2CryptoKitECDH;

@interface NEIKEv2DHKeys : NSObject {
    int _type;
    unsigned long long _group;
    NSData *_prime;
    _TtC16NetworkExtension20NEIKEv2CryptoKitECDH *_ecdhContext;
    NSData *_publicKey;
    struct OpaqueSecDHContext { } *_context;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
