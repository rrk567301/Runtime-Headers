@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {
    NSArray *_trafficSelectors;
}

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)generatePayloadData;
- (char)hasRequiredFields;
- (char)parsePayloadData;

@end
