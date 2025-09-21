@interface NEIKEv2KeyExchangeHandlerMODP : NEIKEv2KeyExchangeHandler {
    unsigned long long _primeLength;
    struct OpaqueSecDHContext { } *_context;
}

- (void)dealloc;
- (BOOL)processPeerPayload:(id)a0;

@end
