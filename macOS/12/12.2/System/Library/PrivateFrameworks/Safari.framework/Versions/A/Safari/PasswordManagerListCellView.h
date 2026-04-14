@class NSLayoutConstraint, NSImageView, NSTextField;
@protocol PasswordManagerListCellViewDelegate;

@interface PasswordManagerListCellView : NSTableCellView

@property (weak, nonatomic) NSTextField *usernameField;
@property (weak, nonatomic) NSTextField *issueTypesField;
@property (weak, nonatomic) NSImageView *warningImageView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingSpaceToSuperview;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingSpaceToSuperview;
@property (weak, nonatomic) id<PasswordManagerListCellViewDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;

@end
