@class NSArray, NEIKEv2KeyExchangePayload;

@interface NEIKEv2IntermediatePacket : NEIKEv2Packet {
    NSArray *_authenticatedDataVector;
    NEIKEv2KeyExchangePayload *_ke;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (void)filloutPayloads;
- (unsigned long long)exchangeType;
- (void)gatherPayloads;

@end
