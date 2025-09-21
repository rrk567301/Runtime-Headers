@class NSButton, NSImageView;

@interface ASWriteReviewDialogView : NSView

@property (readonly, nonatomic) NSImageView *iconView;
@property (readonly, nonatomic) NSButton *primaryButton;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (copy, nonatomic) id /* block */ primaryButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly) double contentLeadingEdge;
@property (readonly) double contentTopEdge;
@property (readonly) double contentBottomEdge;
@property (readonly) double interItemMargin;
@property (readonly) char hasLeadingEdgeAlignedCancelButton;

+ (id)createLabelWithNumberOfLines:(long long)a0 font:(id)a1;

- (void).cxx_destruct;
- (void)layout;
- (char)isFlipped;
- (void)didClickCancelButton:(id)a0;
- (void)didClickPrimaryButton:(id)a0;
- (id)initWithConfiguration:(id)a0 hasLeadingEdgeAlignedCancelButton:(char)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
