@interface PDFListItemElement : PDFAtomicElement

@property struct vector<std::shared_ptr<TextLine>, std::allocator<std::shared_ptr<TextLine>>> { void *__begin_; void *__end_; void *__cap_; } textLines;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTextLines:(const void *)a0 boundingBox:(id)a1;

@end
