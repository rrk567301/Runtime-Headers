@class PDFPage;

@interface PDFTextLogicalPosition : NSObject

@property (weak, nonatomic) PDFPage *page;
@property (nonatomic) long long offset;

- (void).cxx_destruct;
- (id)initWithPage:(id)a0 offset:(long long)a1;

@end
