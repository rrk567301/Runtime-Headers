@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    BOOL _elementIsArgumentBuffer;
    BOOL _isConstantBuffer;
    BOOL _doRetain;
}

- (id)structType;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (unsigned long long)alignment;
- (unsigned long long)dataType;
- (id)elementStructType;
- (unsigned long long)access;
- (BOOL)elementIsIndirectArgumentBuffer;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;
- (BOOL)isConstantBuffer;
- (unsigned long long)dataSize;
- (id)elementTypeDescription;
- (unsigned long long)elementType;
- (BOOL)elementIsArgumentBuffer;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (id)elementArrayType;
- (BOOL)isEqual:(id)a0;

@end
