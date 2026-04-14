@class NSArray, NSBezierPath, NSMutableArray, AMSUIMessageView;

@interface AMSUIMessageViewSolariumLayoutContext : NSObject <AMSUIMessageViewLayoutContextProtocol>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessoryViewFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessorySecondaryViewFrame;
@property struct CGSize { double width; double height; } contentSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topAlignButtonLayoutFrame;
@property (retain) NSArray *topButtonFrames;
@property (retain) NSArray *bottomButtonFrames;
@property (retain) NSArray *buttonFrames;
@property (retain) NSMutableArray *footerButtonFrames;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerContainerViewFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property double totalFooterButtonHeight;
@property BOOL isDirty;
@property BOOL isFooterButtonStacked;
@property BOOL shouldLayoutAXStackedEffective;
@property struct CGSize { double width; double height; } lastFittingSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastMessageViewFrame;
@property struct CGSize { double width; double height; } lastSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainContentFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskViewFrame;
@property (weak) AMSUIMessageView *messageView;
@property (retain) NSMutableArray *separatorViewFrames;
@property struct CGSize { double width; double height; } textViewContentHuggingSize;
@property (retain) NSBezierPath *textViewExclusionPath;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewFrame;
@property (readonly) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentLayoutMargins;
@property (readonly) double accessorySpacing;
@property (readonly) BOOL shouldUseStackedLayout;
@property BOOL isTopAlignedTextButtonAllowed;

- (void)invalidate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithMessageView:(id)a0;
- (void)layoutSubviewFrames;

@end
