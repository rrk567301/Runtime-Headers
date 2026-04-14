@class IKMipmapImage, IKImageWrapper;

@interface IKMipmapItem : NSObject {
    IKMipmapImage *_parent;
    IKImageWrapper *_image;
    int _mipmapSize;
    unsigned char _vmUsagePolicy : 8;
    unsigned char _thumbnailQuality : 8;
    unsigned char _isReference : 1;
    unsigned char _sizeIsVarying : 1;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isValid;
- (void)invalidate;
- (void)setImage:(id)a0;
- (id)image;
- (id)parent;
- (BOOL)unload;
- (BOOL)loaded;
- (void)setIsReference:(BOOL)a0;
- (void)setParent:(id)a0;
- (void)referenceWillDie;
- (void)mapIntoVRAM;
- (void)__setDictionaryRepresentation:(id)a0;
- (int)thumbnailQuality;
- (void)setThumbnailQuality:(int)a0;
- (id)__image;
- (void)setMipmapSize:(int)a0;
- (int)mipmapSize;
- (BOOL)sizeIsVarying;
- (void)setSizeIsVarying:(BOOL)a0;
- (BOOL)setAsMipmapOfImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 antialiased:(BOOL)a2 quality:(int)a3;
- (BOOL)setAsMipmapOfImage:(id)a0 aspectRatio:(float)a1 antialiased:(BOOL)a2 quality:(int)a3;
- (int)vmUsagePolicy;
- (void)setVmUsagePolicy:(int)a0;
- (void)setAsReferenceOf:(id)a0;
- (void)integrateReferenceInstance:(id)a0 replaceImage:(BOOL)a1;

@end
