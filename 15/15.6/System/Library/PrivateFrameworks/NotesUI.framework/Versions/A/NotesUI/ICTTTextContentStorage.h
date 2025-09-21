@class ICOutlineController, ICTTTextStorage;

@interface ICTTTextContentStorage : NSTextContentStorage

@property (retain, nonatomic) ICOutlineController *outlineController;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addTextLayoutManager:(id)a0;
- (void)removeTextLayoutManager:(id)a0;
- (void)setExpanded:(char)a0 forSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)canCollapseSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)canExpandSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)collapseAllSections;
- (void)expandAllSections;
- (id)initWithTextStorage:(id)a0 outlineState:(id)a1;
- (char)isUUIDHidden:(id)a0;

@end
