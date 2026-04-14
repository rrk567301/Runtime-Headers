@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned long long _customType;
}

@property (readonly) NSString *stringValue;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)valueType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)attributeType;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 stringValue:(id)a2;
- (id)initWithStringValue:(id)a0;

@end
