@class NSData, NEIKEv2KeyExchangePayload;

@interface NEIKEv2IntermediatePacket : NEIKEv2Packet {
    NEIKEv2KeyExchangePayload *_ke;
    NSData *_internalAuthenticatedData;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
