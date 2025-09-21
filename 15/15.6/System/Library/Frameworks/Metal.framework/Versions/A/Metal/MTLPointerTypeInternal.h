@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    char _elementIsArgumentBuffer;
    char _isConstantBuffer;
    char _doRetain;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (char)elementIsIndirectArgumentBuffer;
- (unsigned long long)access;
- (unsigned long long)alignment;
- (unsigned long long)dataType;
- (id)elementArrayType;
- (char)elementIsArgumentBuffer;
- (id)elementStructType;
- (unsigned long long)elementType;
- (id)structType;
- (id)elementTypeDescription;
- (unsigned long long)dataSize;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(char)a5 isConstantBuffer:(char)a6 doRetain:(char)a7;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(char)a5 isConstantBuffer:(char)a6;
- (char)isConstantBuffer;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;

@end
