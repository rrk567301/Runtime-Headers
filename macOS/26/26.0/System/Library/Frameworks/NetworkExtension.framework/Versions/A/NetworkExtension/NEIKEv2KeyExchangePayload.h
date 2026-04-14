@class NSData, NEIKEv2KEMProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2KEMProtocol *_kem;
    NSData *_keData;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
