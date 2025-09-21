@class NSString;

@interface MTLAttributeInternal : MTLAttribute {
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (char)isActive;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)attributeType;
- (void)setAttributeType:(unsigned long long)a0;
- (unsigned long long)attributeIndex;
- (id)initWithName:(id)a0 attributeIndex:(unsigned long long)a1 attributeType:(unsigned long long)a2 flags:(struct MTLAttributeFlags { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 5; } x0; unsigned char x1; } x0; })a3;
- (char)isPatchControlPointData;
- (char)isPatchData;

@end
