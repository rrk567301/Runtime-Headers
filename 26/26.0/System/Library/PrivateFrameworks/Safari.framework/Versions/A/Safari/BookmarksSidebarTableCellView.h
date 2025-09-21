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

- (id)accessibilityLabel;
- (void)cancelOperation:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)awakeFromNib;
- (void)_updateIconImage;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder:(id)a0;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder:(id)a0;
- (void)didPressRemoveButton:(id)a0;

@end
