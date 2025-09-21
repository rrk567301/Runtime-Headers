@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned long long _customType;
}

@property (readonly) NWAddressEndpoint *address;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0;
- (unsigned long long)attributeType;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2;

@end
