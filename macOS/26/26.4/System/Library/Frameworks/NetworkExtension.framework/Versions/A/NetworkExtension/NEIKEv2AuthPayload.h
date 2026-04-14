@class NSData, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2AuthPayload : NEIKEv2Payload {
    NEIKEv2AuthenticationProtocol *_authProtocol;
    NSData *_authenticationData;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
