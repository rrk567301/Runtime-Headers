@class NEIKEv2NotifyPayload, NEIKEv2KeyExchangePayload;

@interface NEIKEv2FollowupKEPacket : NEIKEv2Packet {
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NotifyPayload *_link;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (void)filloutPayloads;
- (unsigned long long)exchangeType;
- (void)gatherPayloads;

@end
