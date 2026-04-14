@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned long long _customType;
}

@property (readonly) NSString *stringValue;

- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)valueType;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 stringValue:(id)a2;
- (id)initWithStringValue:(id)a0;

@end
