@class MTLStructType, NSString, MTLType;

@interface MTLArgumentInternal : MTLArgument {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _access;
    unsigned long long _index;
    BOOL _active;
    unsigned long long _arrayLength;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long bufferPixelFormat;
@property (readonly) unsigned long long bufferALUType;
@property (readonly) MTLStructType *structType;

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned long long)type;
- (BOOL)isActive;
- (unsigned long long)index;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)textureType;
- (unsigned long long)arrayLength;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)access;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)textureDataType;
- (id)structType;
- (id)dataTypeDescription;
- (id)bufferStructType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5;
- (unsigned long long)bufferDataType;
- (id)bufferPointerType;
- (id)bufferIndirectArgumentType;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5 typeDescription:(id)a6;

@end
