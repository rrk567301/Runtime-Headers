@class MTLStructTypeInternal;

@interface MTLBuiltInMeshArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
    unsigned short _meshVertexCount;
    unsigned short _meshPrimitiveCount;
    unsigned short _meshTopologyType;
    MTLStructTypeInternal *_meshVertexStruct;
    MTLStructTypeInternal *_meshPrimitiveStruct;
}

- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6 meshVertexStructType:(id)a7 meshPrimitiveStructType:(id)a8 meshVertexCount:(unsigned short)a9 meshPrimitiveCount:(unsigned short)a10 meshTopologyType:(unsigned long long)a11;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)meshPrimitiveStruct;
- (unsigned long long)builtInType;
- (id)meshVertexStruct;
- (unsigned long long)meshTopologyType;
- (unsigned long long)meshPrimitiveCount;
- (unsigned long long)meshVertexCount;
- (unsigned long long)builtInDataType;
- (void)dealloc;

@end
