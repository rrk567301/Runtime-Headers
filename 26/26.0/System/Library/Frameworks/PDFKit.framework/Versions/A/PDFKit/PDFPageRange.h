@class PDFPageRangePrivate;

@interface PDFPageRange : NSObject {
    PDFPageRangePrivate *_private;
}

- (void)setPage:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)page;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
