@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint *_address;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)stringValue;
- (void).cxx_destruct;
- (unsigned long long)identifierType;
- (id)identifierData;
- (id)initWithAddress:(id)a0;

@end
