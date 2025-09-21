@class MTLStructTypeInternal;

@interface MTLImageBlockArgument : MTLBindingInternal {
    unsigned long long _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (unsigned long long)imageBlockKind;
- (id)imageBlockMasterStructMembers;
- (char)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (unsigned long long)imageBlockDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(char)a3 index:(unsigned long long)a4 kind:(unsigned long long)a5 dataSize:(unsigned int)a6 masterStructMembers:(id)a7 aliasImplicitImageBlock:(BOOL)a8 aliasImplicitImageBlockRenderTarget:(unsigned int)a9;
- (void)setStructType:(id)a0;

@end
