@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
    NEIKEv2Identifier *_identifier;
}

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
