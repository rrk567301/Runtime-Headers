@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {
    unsigned long long _protocol;
    NSArray *_spis;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
