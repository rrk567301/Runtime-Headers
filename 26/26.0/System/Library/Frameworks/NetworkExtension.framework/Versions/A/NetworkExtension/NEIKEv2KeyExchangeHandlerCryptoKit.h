@interface NEIKEv2KeyExchangeHandlerCryptoKit : NEIKEv2KeyExchangeHandler

+ (id)handlerForMethod:(unsigned long long)a0 error:(id *)a1;
+ (id)handlerForMethod:(unsigned long long)a0 peerPayload:(id)a1 error:(id *)a2;

- (id)initWithMethod:(unsigned long long)a0 keyExchangeData:(id)a1;

@end
