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

- (void)dealloc;
- (unsigned long long)dataType;
- (id)elementArrayType;
- (BOOL)elementIsArgumentBuffer;
- (BOOL)elementIsIndirectArgumentBuffer;
- (id)elementStructType;
- (unsigned long long)elementType;
- (unsigned long long)access;
- (id)structType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)alignment;
- (id)elementTypeDescription;
- (unsigned long long)dataSize;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;
- (BOOL)isConstantBuffer;

@end
