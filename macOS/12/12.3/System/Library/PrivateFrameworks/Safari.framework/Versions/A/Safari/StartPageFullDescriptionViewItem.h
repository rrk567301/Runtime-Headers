@class NSImage, FullDescriptionViewItemImageView, NSTextField;
@protocol StartPageFullDescriptionViewItemDelegate;

@interface StartPageFullDescriptionViewItem : StartPageViewItem {
    FullDescriptionViewItemImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
}

@property (retain, nonatomic) NSImage *image;
@property (weak, nonatomic) id<StartPageFullDescriptionViewItemDelegate> delegate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (void)rightMouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)configureViewWithTitle:(id)a0 description:(id)a1 image:(id)a2;

@end
