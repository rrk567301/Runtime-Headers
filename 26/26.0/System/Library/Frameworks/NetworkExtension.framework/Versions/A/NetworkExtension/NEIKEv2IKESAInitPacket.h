@class NEIKEv2IKESAPayload, NEIKEv2NoncePayload, NEIKEv2KeyExchangePayload, NSArray, NSData, NEIKEv2NotifyPayload;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet {
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
    NSData *_originalPacket;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (void)filloutPayloads;
- (BOOL)encryptPayloads;
- (unsigned long long)exchangeType;
- (void)gatherPayloads;

@end
