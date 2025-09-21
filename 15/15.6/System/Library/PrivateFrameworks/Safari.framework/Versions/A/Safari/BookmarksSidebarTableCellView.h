@class NSTextField, NSImageView, NSImage, NSLayoutConstraint, RolloverImageButton;
@protocol BookmarksSidebarTableCellViewDelegate;

@interface BookmarksSidebarTableCellView : NSTableCellView

@property (retain, nonatomic) NSLayoutConstraint *textFieldRightMarginConstraintWhenEditing;
@property (weak, nonatomic) NSImageView *faviconView;
@property (weak, nonatomic) NSTextField *bookmarkTitleTextField;
@property (weak, nonatomic) RolloverImageButton *removeButton;
@property (weak) NSLayoutConstraint *removeButtonWidthConstraint;
@property (weak) NSLayoutConstraint *removeButtonHeightConstraint;
@property (weak, nonatomic) id<BookmarksSidebarTableCellViewDelegate> delegate;
@property (nonatomic) long long bookmarkStyle;
@property (retain, nonatomic) NSImage *bookmarkIconImage;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (char)acceptsFirstResponder;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (char)accessibilityPerformShowMenu;
- (id)accessibilityRole;
- (void)awakeFromNib;
- (char)becomeFirstResponder;
- (void)cancelOperation:(id)a0;
- (char)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (void)_updateIconImage;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder:(id)a0;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder:(id)a0;
- (void)didPressRemoveButton:(id)a0;

@end
