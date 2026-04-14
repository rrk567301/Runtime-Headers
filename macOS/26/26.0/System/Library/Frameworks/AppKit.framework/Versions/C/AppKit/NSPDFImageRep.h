@class NSData, _NSPDFDocument;

@interface NSPDFImageRep : NSImageRep {
    NSData *_pdfData;
    _NSPDFDocument *_private;
}

@property (readonly) NSData *PDFRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property long long currentPage;
@property (readonly) long long pageCount;

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (BOOL)canInitWithData:(id)a0;
+ (id)imageRepWithData:(id)a0;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredTypes;

- (BOOL)_isValid;
- (id)initWithData:(id)a0;
- (BOOL)draw;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (struct CGPattern { } *)_createPatternForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (long long)_pixelsHighOrResolutionIndependent;
- (long long)_pixelsWideOrResolutionIndependent;
- (long long)_uncachedSize;

@end
