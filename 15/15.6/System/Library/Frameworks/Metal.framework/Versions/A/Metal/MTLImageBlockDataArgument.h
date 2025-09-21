@class MTLStructTypeInternal;

@interface MTLImageBlockDataArgument : MTLBindingInternal {
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (id)imageBlockMasterStructMembers;
- (char)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (unsigned long long)imageBlockDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(char)a3 index:(unsigned long long)a4 dataSize:(unsigned int)a5 masterStructMembers:(id)a6 aliasImplicitImageBlock:(BOOL)a7 aliasImplicitImageBlockRenderTarget:(unsigned int)a8;
- (void)setStructType:(id)a0;

@end
