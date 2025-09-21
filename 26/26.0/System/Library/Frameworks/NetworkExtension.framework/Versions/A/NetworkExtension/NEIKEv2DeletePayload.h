@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {
    unsigned long long _protocol;
    NSArray *_spis;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
