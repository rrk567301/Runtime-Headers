@class NSString;

@interface _UTConstantType : UTType {
    struct Fields { NSString *identifier; unsigned char family : 2; unsigned char tagQuantity : 1; unsigned char nodeType : 1; unsigned char reservedFlags : 4; char preferredExtension[7]; } _fields;
}

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_validateThisClass;

- (BOOL)isDynamic;
- (id)tags;
- (BOOL)isDeclared;
- (id)identifier;
- (id)debugDescription;
- (Class)classForCoder;
- (id)_typeRecord;
- (BOOL)conformsToType:(id)a0;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)_isRealized;
- (id)_preferredTagOfClass:(id)a0;
- (void)_unrealize;
- (BOOL)isPublicType;
- (id)supertypes;

@end
