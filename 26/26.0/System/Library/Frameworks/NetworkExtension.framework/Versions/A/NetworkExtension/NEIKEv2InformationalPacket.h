@class NSArray, NEIKEv2ConfigPayload;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet {
    NSArray *_deletes;
    NEIKEv2ConfigPayload *_config;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (void)filloutPayloads;
- (unsigned long long)exchangeType;
- (void)gatherPayloads;

@end
