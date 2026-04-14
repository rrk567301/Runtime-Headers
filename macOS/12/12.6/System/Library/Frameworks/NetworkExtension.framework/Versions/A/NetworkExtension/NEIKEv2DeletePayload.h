@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload

@property unsigned long long protocol;
@property (retain) NSArray *spis;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
