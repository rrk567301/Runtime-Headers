@class NSData, NSPDFImageRep;

@interface NSEPSImageRep : NSImageRep {
    struct CGPoint { double x; double y; } _bBoxOrigin;
    NSData *_epsData;
    NSPDFImageRep *_pdfImageRep;
}

@property (readonly, copy) NSData *EPSRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;

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
- (void)prepareGState;

@end
