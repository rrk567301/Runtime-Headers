@class NSData;

@interface NEIKEv2KeyExchangeHandlerMODP : NEIKEv2KeyExchangeHandler {
    NSData *_prime;
    struct OpaqueSecDHContext { } *_context;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)processPeerPayload:(id)a0;

@end
