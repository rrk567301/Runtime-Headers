@class NSTextField, NSImageView, NSLayoutConstraint;

@interface SMProgressConnectionsSheetCell : NSTableCellView

@property NSLayoutConstraint *titleCenterYConstraint;
@property NSImageView *fastestView;
@property NSTextField *subtitleField;
@property NSTextField *titleField;
@property NSImageView *icon;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)defaultLayout;
- (void)titleOnlyLayout;
- (double)titleOnlyCenterYConstant;
- (double)titleWithSubtitleCenterYConstant;

@end
