@interface _NSPDFDocument : NSObject {
    struct CGPDFDocument { } *_document;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    long long _currentPage;
}

- (id)initWithData:(id)a0;
- (long long)pageCount;
- (long long)currentPage;
- (void)dealloc;
- (void)setCurrentPage:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGPDFDocument { } *)documentRef;

@end
