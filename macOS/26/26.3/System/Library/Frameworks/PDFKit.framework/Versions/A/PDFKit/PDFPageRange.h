@class PDFPageRangePrivate;

@interface PDFPageRange : NSObject {
    PDFPageRangePrivate *_private;
}

- (void)setPage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)page;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithPage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
