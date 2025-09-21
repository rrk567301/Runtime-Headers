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
- (char)isValid;
- (void)invalidate;
- (void)setImage:(id)a0;
- (id)image;
- (id)parent;
- (char)unload;
- (void)setIsReference:(char)a0;
- (void)setParent:(id)a0;
- (char)loaded;
- (id)__image;
- (void)__setDictionaryRepresentation:(id)a0;
- (void)integrateReferenceInstance:(id)a0 replaceImage:(char)a1;
- (void)mapIntoVRAM;
- (int)mipmapSize;
- (void)referenceWillDie;
- (char)setAsMipmapOfImage:(id)a0 aspectRatio:(float)a1 antialiased:(char)a2 quality:(int)a3;
- (char)setAsMipmapOfImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 antialiased:(char)a2 quality:(int)a3;
- (void)setAsReferenceOf:(id)a0;
- (void)setMipmapSize:(int)a0;
- (void)setSizeIsVarying:(char)a0;
- (void)setThumbnailQuality:(int)a0;
- (void)setVmUsagePolicy:(int)a0;
- (char)sizeIsVarying;
- (int)thumbnailQuality;
- (int)vmUsagePolicy;

@end
