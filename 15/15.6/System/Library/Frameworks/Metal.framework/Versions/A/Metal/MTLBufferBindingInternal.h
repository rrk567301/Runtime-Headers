@class MTLStructType, NSString, MTLPointerType;

@interface MTLBufferBindingInternal : MTLBindingInternal <MTLBufferBinding> {
    unsigned short _dataType : 15;
    unsigned char _vertexDescriptorBuffer : 1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isUsed) char used;
@property (readonly, getter=isArgument) char argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)setAlignment:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)structType;
- (void)setDataSize:(unsigned long long)a0;
- (unsigned long long)bufferALUType;
- (id)bufferIndirectArgumentType;
- (unsigned long long)bufferPixelFormat;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(char)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 pixelFormat:(unsigned long long)a7 aluType:(unsigned long long)a8 isConstantBuffer:(char)a9 dataSize:(unsigned long long)a10 alignment:(unsigned long long)a11;
- (char)isVertexDescriptorBuffer;
- (void)setStructType:(id)a0;
- (void)setStructType:(id)a0 doRetain:(char)a1;
- (void)setVertexDescriptorBuffer:(char)a0;

@end
