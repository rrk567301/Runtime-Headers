@interface StartPageReadingListViewItem : StartPageFullDescriptionViewItem

@property (nonatomic, getter=isGenerated) BOOL generated;

- (void)configureViewWithTitle:(id)a0 description:(id)a1 image:(id)a2 generated:(BOOL)a3;

@end
