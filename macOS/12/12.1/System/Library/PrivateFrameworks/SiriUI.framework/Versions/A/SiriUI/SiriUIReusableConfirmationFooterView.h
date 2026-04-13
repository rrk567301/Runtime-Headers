@class NSButton, SiriUIKeyline, SAUIConfirmationOptions;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
}

@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic) NSButton *confirmButton;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
