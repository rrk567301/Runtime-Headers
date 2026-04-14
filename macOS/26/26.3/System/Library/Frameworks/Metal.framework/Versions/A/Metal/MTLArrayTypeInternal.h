@class MTLType;

@interface MTLArrayTypeInternal : MTLArrayType {
    unsigned long long _dataType;
    unsigned int _arrayLength : 32;
    unsigned int _stride : 32;
    id _details;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (nonatomic) unsigned long long argumentIndexStride;
@property (nonatomic) unsigned long long indirectArgumentIndexStride;

- (unsigned long long)dataType;
- (id)elementStructType;
- (id)initWithArrayLength:(unsigned long long)a0 elementType:(unsigned long long)a1 stride:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 aluType:(unsigned long long)a4 details:(id)a5;
- (id)elementTensorReferenceType;
- (id)elementIndirectArgumentType;
- (id)elementTextureReferenceType;
- (unsigned long long)arrayLength;
- (unsigned long long)stride;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (BOOL)isArrayLayoutThreadSafeWith:(id)a0;
- (id)elementArrayType;
- (id)elementTypeDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)elementType;
- (void)setStride:(unsigned long long)a0;
- (id)elementPointerType;

@end
