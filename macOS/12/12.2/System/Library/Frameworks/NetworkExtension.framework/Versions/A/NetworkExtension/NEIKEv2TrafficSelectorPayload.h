@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload

@property (retain) NSArray *trafficSelectors;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
