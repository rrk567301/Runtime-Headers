@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned long long _customType;
}

@property (readonly) NWAddressEndpoint *address;
@property (readonly) unsigned char prefix;
@property (readonly) unsigned int ipv4SubnetMask;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)attributeType;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initWithAddress:(id)a0 ipv4SubnetMask:(unsigned int)a1;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 ipv4SubnetMask:(unsigned int)a3;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 prefix:(unsigned char)a3;
- (id)initWithAddress:(id)a0 prefix:(unsigned char)a1;

@end
