@interface PDFListItemElement : PDFAtomicElement

@property struct vector<std::shared_ptr<TextLine>, std::allocator<std::shared_ptr<TextLine>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } textLines;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTextLines:(const void *)a0 boundingBox:(id)a1;

@end
