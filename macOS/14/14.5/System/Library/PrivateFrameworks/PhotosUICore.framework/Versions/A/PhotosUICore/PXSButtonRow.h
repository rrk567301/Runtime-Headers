@interface PXSButtonRow : PXSRow

+ (id)rowWithTitle:(id)a0 action:(id)a1;

- (id)displayTitle;
- (void)_handleButton:(id)a0;
- (void)updateNameView:(id)a0;
- (id)createNameView;
- (id)nameViewReuseIdentifier;
- (void)prepareNameViewForReuse:(id)a0;
- (id)valueViewReuseIdentifier;

@end
