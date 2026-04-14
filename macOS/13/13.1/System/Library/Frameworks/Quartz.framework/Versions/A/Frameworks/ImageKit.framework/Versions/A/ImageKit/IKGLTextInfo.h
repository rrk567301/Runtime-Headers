@class NSString, NSDictionary;

@interface IKGLTextInfo : NSObject {
    NSString *_text;
    NSDictionary *_attributes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _specifiedRect;
    struct CGSize { double width; double height; } _textMinimalSize;
    float _alpha;
    BOOL _needsPostProcess;
    id _buffer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _region;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    unsigned int _textureID;
    int _subCacheSizeIndex;
}

@property unsigned int session;
@property unsigned int pageIndex;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)setAttributes:(id)a0;
- (id)buffer;
- (void)setBuffer:(id)a0;
- (id)attributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)setAlpha:(float)a0;
- (float)alpha;
- (id)text;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region;
- (void)setText:(id)a0;
- (unsigned int)textureID;
- (void)setTextureID:(unsigned int)a0;
- (void)setMinimalSizeForText:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimalSizeForText;
- (void)setSpecifiedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })specifiedRect;
- (int)subCacheSizeIndex;
- (void)setSubCacheSizeIndex:(int)a0;
- (void)setNeedsPostProcess:(BOOL)a0;
- (BOOL)needsPostProcess;

@end
