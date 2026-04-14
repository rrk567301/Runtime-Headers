@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    unsigned long long _identifierType;
}

@property (readonly) NWAddressEndpoint *address;

- (id)initWithAddress:(id)a0;
- (id)stringValue;
- (unsigned long long)identifierType;
- (void).cxx_destruct;
- (id)typeDescription;

@end
