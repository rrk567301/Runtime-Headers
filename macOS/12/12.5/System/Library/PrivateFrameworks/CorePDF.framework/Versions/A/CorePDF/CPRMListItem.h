@interface CPRMListItem : NSObject {
    unsigned long long _count;
    unsigned long long _pos;
}

@property (readonly) struct CGPDFNode **paragraphNodes;
@property (readonly) struct CGPDFPage { } *page;

- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGPDFPage { } *)page;
- (void)addParagraph:(struct CGPDFNode { } *)a0;

@end
