@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)stringValue;
- (void).cxx_destruct;
- (unsigned long long)identifierType;
- (id)initWithAddress:(id)a0;
- (id)identifierData;

@end
