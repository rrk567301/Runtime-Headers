@class NSArray, NEIKEv2IKESPI;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload

@property (retain) NSArray *proposals;
@property (retain) NEIKEv2IKESPI *rekeyIKESPI;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
