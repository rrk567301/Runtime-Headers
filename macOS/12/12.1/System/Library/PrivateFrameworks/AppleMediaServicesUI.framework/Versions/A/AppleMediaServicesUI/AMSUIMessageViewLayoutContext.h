@class NSBezierPath, NSMutableArray, AMSUIMessageView;

@interface AMSUIMessageViewLayoutContext : NSObject

@property (weak) AMSUIMessageView *messageView;
@property struct CGSize { double width; double height; } lastFittingSize;
@property struct CGSize { double width; double height; } lastSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainContentFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessoryViewFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerContainerViewFrame;
@property (retain) NSMutableArray *footerButtonFrames;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskViewFrame;
@property (retain) NSMutableArray *separatorViewFrames;
@property struct CGSize { double width; double height; } textViewContentHuggingSize;
@property double textViewFrameCenteredYOffset;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewFrame;
@property BOOL isDirty;
@property (retain) NSBezierPath *textViewExclusionPath;
@property (readonly) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentLayoutMargins;
@property (readonly) double accessorySpacing;
@property (readonly) BOOL shouldUseStackedLayout;

- (void)invalidate;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMessageView:(id)a0;
- (void)layoutSubviewFrames;

@end
