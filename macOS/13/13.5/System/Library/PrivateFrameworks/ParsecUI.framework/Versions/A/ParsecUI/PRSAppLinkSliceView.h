@class NSView, PRSCardSection, NSTextField;

@interface PRSAppLinkSliceView : NSView

@property NSTextField *headerText;
@property NSView *containerView;
@property (retain) PRSCardSection *cardSection;

- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addAppLinkCardSectionLinks:(id)a0;

@end
