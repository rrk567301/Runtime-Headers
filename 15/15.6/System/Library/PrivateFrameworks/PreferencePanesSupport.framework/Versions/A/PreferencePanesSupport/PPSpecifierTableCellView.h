@class NSImageView, NSTextField, NSLayoutConstraint, NSButton;

@interface PPSpecifierTableCellView : NSTableCellView {
    char _selected;
    char _enabled;
}

@property (getter=isSelected) char selected;
@property (getter=isEnabled) char enabled;
@property NSTextField *subtitleTextField;
@property NSButton *badge;
@property NSImageView *badgeImageView;
@property (retain) NSLayoutConstraint *labelToBadgeImageConstraint;
@property (retain) NSLayoutConstraint *labelToBadgeConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setSelected:(char)a0;
- (void)setBadgeImage:(id)a0;
- (void)setBadgeCount:(id)a0;

@end
