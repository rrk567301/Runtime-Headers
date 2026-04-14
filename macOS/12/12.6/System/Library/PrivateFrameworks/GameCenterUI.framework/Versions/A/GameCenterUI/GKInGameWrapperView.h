@class NSTextField, NSString, NSView, NSLayoutConstraint;

@interface GKInGameWrapperView : NSView

@property NSView *titleView;
@property NSTextField *titleLabel;
@property NSLayoutConstraint *titleHeightConstraint;
@property double titleHeight;
@property NSView *contentContainerView;
@property NSView *footerContainerView;
@property (copy) NSString *title;
@property NSView *contentView;
@property NSView *footerView;
@property (getter=isTitleHidden) BOOL titleHidden;

+ (id)wrapperView;

- (void)awakeFromNib;

@end
