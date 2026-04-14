@class PDFPage, PDFDestinationPrivate;

@interface PDFDestination : NSObject <NSCopying> {
    PDFDestinationPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) double zoom;

- (void)commonInit;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)document;
- (void).cxx_destruct;
- (id)initWithPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1;
- (struct __CFArray { } *)createArrayRef;
- (id)pageIfExists;

@end
