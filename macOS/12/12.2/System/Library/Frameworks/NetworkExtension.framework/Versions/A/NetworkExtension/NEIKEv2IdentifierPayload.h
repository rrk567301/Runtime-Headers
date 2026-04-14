@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload

@property (retain) NEIKEv2Identifier *identifier;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
