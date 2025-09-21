@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {
    unsigned long long _protocol;
    NSArray *_spis;
}

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)generatePayloadData;
- (char)hasRequiredFields;
- (char)parsePayloadData;

@end
