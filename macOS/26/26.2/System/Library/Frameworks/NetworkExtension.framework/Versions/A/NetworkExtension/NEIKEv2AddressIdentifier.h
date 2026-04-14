@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    unsigned long long _identifierType;
}

@property (readonly) NWAddressEndpoint *address;

- (unsigned long long)identifierType;
- (void).cxx_destruct;
- (id)stringValue;
- (id)initWithAddress:(id)a0;
- (id)typeDescription;

@end
