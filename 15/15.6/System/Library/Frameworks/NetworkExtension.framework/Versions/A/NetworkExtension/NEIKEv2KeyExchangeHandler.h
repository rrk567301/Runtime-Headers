@class NSData;

@interface NEIKEv2KeyExchangeHandler : NSObject {
    unsigned long long _method;
    NSData *_keyExchangeData;
    NSData *_sharedSecret;
}

- (void).cxx_destruct;
- (char)processPeerPayload:(id)a0;

@end
