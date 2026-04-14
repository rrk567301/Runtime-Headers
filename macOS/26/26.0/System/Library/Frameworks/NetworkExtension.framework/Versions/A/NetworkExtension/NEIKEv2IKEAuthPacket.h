@class NEIKEv2EAPPayload, NEIKEv2ResponderIdentifierPayload, NEIKEv2InitiatorIdentifierPayload, NSArray, NEIKEv2AuthPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderTrafficSelectorPayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload, NEIKEv2GSPMPayload;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet {
    NEIKEv2ChildSAPayload *_sa;
    NEIKEv2InitiatorIdentifierPayload *_idi;
    NEIKEv2ResponderIdentifierPayload *_idr;
    NSArray *_certificates;
    NSArray *_certificateRequests;
    NEIKEv2AuthPayload *_auth;
    NEIKEv2EAPPayload *_eap;
    NEIKEv2GSPMPayload *_gspm;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (void)filloutPayloads;
- (unsigned long long)exchangeType;
- (void)gatherPayloads;

@end
