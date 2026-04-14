@interface PXSButtonRow : PXSRow

+ (id)rowWithTitle:(id)a0 action:(id)a1;

- (id)displayTitle;
- (id)valueViewReuseIdentifier;
- (id)nameViewReuseIdentifier;
- (id)createNameView;
- (void)updateNameView:(id)a0;
- (void)prepareNameViewForReuse:(id)a0;
- (void)_handleButton:(id)a0;

@end
