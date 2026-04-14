@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {
    NSArray *_trafficSelectors;
}

- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
