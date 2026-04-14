@interface PDFTextLineElement : PDFAtomicElement

@property struct shared_ptr<TextLine> { struct TextLine *__ptr_; struct __shared_weak_count *__cntrl_; } textLine;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTextLine:(const void *)a0 boundingBox:(id)a1;

@end
