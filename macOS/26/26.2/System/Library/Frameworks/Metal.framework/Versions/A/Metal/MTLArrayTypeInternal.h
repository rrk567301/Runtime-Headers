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

- (id)elementTextureReferenceType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)elementIndirectArgumentType;
- (BOOL)isEqual:(id)a0;
- (id)elementPointerType;
- (unsigned long long)arrayLength;
- (unsigned long long)elementType;
- (id)elementStructType;
- (id)elementTypeDescription;
- (id)elementTensorReferenceType;
- (BOOL)isArrayLayoutThreadSafeWith:(id)a0;
- (id)initWithArrayLength:(unsigned long long)a0 elementType:(unsigned long long)a1 stride:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 aluType:(unsigned long long)a4 details:(id)a5;
- (id)elementArrayType;
- (unsigned long long)stride;
- (void)setStride:(unsigned long long)a0;
- (void)dealloc;

@end
