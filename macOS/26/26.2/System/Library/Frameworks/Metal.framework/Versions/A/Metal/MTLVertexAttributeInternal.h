@class NSString;

@interface MTLVertexAttributeInternal : MTLVertexAttribute {
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (BOOL)isActive;
- (BOOL)isPatchData;
- (unsigned long long)attributeIndex;
- (unsigned long long)attributeType;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setAttributeType:(unsigned long long)a0;
- (id)description;
- (id)name;
- (BOOL)isPatchControlPointData;
- (id)initWithName:(id)a0 attributeIndex:(unsigned long long)a1 attributeType:(unsigned long long)a2 flags:(struct MTLAttributeFlags { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 5; } x0; unsigned char x1; } x0; })a3;
- (void)dealloc;

@end
