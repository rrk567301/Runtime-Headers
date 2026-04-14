@class MTLStructTypeInternal;

@interface MTLImageBlockDataArgument : MTLBindingInternal {
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (BOOL)aliasImplicitImageBlock;
- (id)imageBlockMasterStructMembers;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (void)dealloc;
- (void)setStructType:(id)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 index:(unsigned long long)a4 dataSize:(unsigned int)a5 masterStructMembers:(id)a6 aliasImplicitImageBlock:(BOOL)a7 aliasImplicitImageBlockRenderTarget:(unsigned int)a8;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)imageBlockDataSize;

@end
