@class NEIKEv2Identifier, NEIKEv2IKESA, NSData;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
    NEIKEv2Identifier *_identifier;
    NEIKEv2IKESA *_ikeSA;
    NSData *_payloadData;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
