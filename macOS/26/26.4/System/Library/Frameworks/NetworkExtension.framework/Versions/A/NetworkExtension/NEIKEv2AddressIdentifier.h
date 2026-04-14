@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    unsigned long long _identifierType;
}

@property (readonly) NWAddressEndpoint *address;

- (id)stringValue;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)identifierType;
- (id)typeDescription;

@end
