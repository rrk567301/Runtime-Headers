@interface PXSharedLibraryParticipantSearchField : NSTextField

+ (Class)cellClass;

- (id)participants;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (void)appendTokenString:(id)a0 contact:(id)a1 address:(id)a2 kind:(long long)a3;

@end
