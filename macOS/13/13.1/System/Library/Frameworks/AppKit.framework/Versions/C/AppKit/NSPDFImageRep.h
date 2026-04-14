@class NSData, _NSPDFDocument;

@interface NSPDFImageRep : NSImageRep {
    NSData *_pdfData;
    _NSPDFDocument *_private;
}

@property (readonly) NSData *PDFRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property long long currentPage;
@property (readonly) long long pageCount;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)imageUnfilteredTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageRepWithData:(id)a0;
+ (BOOL)canInitWithData:(id)a0;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)draw;
- (long long)_uncachedSize;
- (BOOL)_isValid;
- (struct CGPattern { } *)_createPatternForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (long long)_pixelsWideOrResolutionIndependent;
- (long long)_pixelsHighOrResolutionIndependent;
- (BOOL)_drawOnlyUsesOneDrawingOperation;

@end
