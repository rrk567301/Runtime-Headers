@class NSImageView, NSTextField, NSImage, NSStackView;
@protocol StartPageFullDescriptionViewItemDelegate;

@interface StartPageFullDescriptionViewItem : StartPageViewItem {
    NSStackView *_contentStackView;
    NSStackView *_textStackView;
    NSStackView *_accessoryStackView;
    NSImageView *_accessoryImageView;
    NSTextField *_accessoryLabel;
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
}

@property (retain, nonatomic) NSImage *image;
@property (weak, nonatomic) id<StartPageFullDescriptionViewItemDelegate> delegate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;

- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (id)_descriptionFromURL:(id)a0;
- (id)_displayableImageForImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 title:(id)a2 url:(id)a3;
- (void)configureViewWithTitle:(id)a0 description:(id)a1 image:(id)a2 accessoryImage:(id)a3 accessoryLabel:(id)a4;
- (id)fetchMetadataWithURL:(id)a0 title:(id)a1 accessoryImage:(id)a2 accessoryLabel:(id)a3;

@end
