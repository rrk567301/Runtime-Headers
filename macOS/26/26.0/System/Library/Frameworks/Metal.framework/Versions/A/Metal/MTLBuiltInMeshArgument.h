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

- (unsigned long long)meshPrimitiveCount;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)meshTopologyType;
- (unsigned long long)meshVertexCount;
- (id)meshPrimitiveStruct;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6 meshVertexStructType:(id)a7 meshPrimitiveStructType:(id)a8 meshVertexCount:(unsigned short)a9 meshPrimitiveCount:(unsigned short)a10 meshTopologyType:(unsigned long long)a11;
- (unsigned long long)builtInType;
- (unsigned long long)builtInDataType;
- (id)meshVertexStruct;
- (BOOL)isEqual:(id)a0;

@end
