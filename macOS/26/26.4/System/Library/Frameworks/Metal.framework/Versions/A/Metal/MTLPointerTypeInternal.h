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

- (unsigned long long)elementType;
- (unsigned long long)access;
- (BOOL)isConstantBuffer;
- (id)structType;
- (BOOL)elementIsArgumentBuffer;
- (unsigned long long)dataSize;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (BOOL)isEqual:(id)a0;
- (id)elementArrayType;
- (unsigned long long)alignment;
- (BOOL)elementIsIndirectArgumentBuffer;
- (unsigned long long)dataType;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)elementTypeDescription;
- (id)elementStructType;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (void)dealloc;

@end
