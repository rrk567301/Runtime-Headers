@class NSData, NEIKEv2KEMProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2KEMProtocol *_kem;
    NSData *_keData;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
