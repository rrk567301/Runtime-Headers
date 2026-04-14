@interface _NSPDFDocument : NSObject {
    struct CGPDFDocument { } *_document;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    long long _currentPage;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithData:(id)a0;
- (long long)pageCount;
- (long long)currentPage;
- (void)setCurrentPage:(long long)a0;
- (void)dealloc;
- (struct CGPDFDocument { } *)documentRef;

@end
