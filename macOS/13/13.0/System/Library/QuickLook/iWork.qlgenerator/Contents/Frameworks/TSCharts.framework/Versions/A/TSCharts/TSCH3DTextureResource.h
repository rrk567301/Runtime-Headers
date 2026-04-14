@class NSNumber, TSCH3DTexture, TSUOnce;

@interface TSCH3DTextureResource : TSCH3DResource <TSCH3DOptimizedTextureResource> {
    TSCH3DTexture *_parent;
    NSNumber *_cachedHash;
    TSUOnce *_cachedHashOnce;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)get;
- (id)initWithParent:(id)a0;
- (id)databufferForDataCache:(id)a0;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (id)p_parent;

@end
