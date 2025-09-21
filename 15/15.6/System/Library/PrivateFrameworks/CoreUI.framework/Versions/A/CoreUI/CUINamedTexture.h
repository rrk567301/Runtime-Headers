@interface CUINamedTexture : CUINamedLookup {
    struct _cuintproperties { unsigned char exifOrientation : 4; unsigned char isAlphaCropped : 1; unsigned char isOpaque : 1; unsigned int _reserved : 26; } _textureProperties;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaCropped;

- (id)description;
- (char)_cacheRenditionProperties;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaCroppedRect;
- (id)textureWithBufferAllocator:(id)a0;

@end
