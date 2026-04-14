@class NSData;

@interface NSPDFImageRep : NSImageRep {
    NSData *_pdfData;
    id _private;
}

@property (readonly) NSData *PDFRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property long long currentPage;
@property (readonly) long long pageCount;

+ (void)initialize;
+ (id)imageUnfilteredTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageRepWithData:(id)a0;
+ (BOOL)canInitWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)draw;
- (long long)_uncachedSize;
- (BOOL)_isValid;
- (void *)_createPatternForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (long long)_pixelsWideOrResolutionIndependent;
- (long long)_pixelsHighOrResolutionIndependent;

@end
