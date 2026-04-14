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

- (id)elementTypeDescription;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (id)elementStructType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (unsigned long long)access;
- (id)structType;
- (BOOL)elementIsArgumentBuffer;
- (unsigned long long)dataSize;
- (unsigned long long)alignment;
- (id)elementArrayType;
- (unsigned long long)elementType;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (void)dealloc;
- (BOOL)elementIsIndirectArgumentBuffer;
- (BOOL)isConstantBuffer;
- (BOOL)isEqual:(id)a0;

@end
