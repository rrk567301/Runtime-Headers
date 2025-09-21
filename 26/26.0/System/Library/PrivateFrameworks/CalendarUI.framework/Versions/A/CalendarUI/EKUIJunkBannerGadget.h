@class NSView, NSGlassEffectView, SGBannerView;

@interface EKUIJunkBannerGadget : EKUISingleViewGadget

@property (retain) NSView *containerView;
@property (retain) NSGlassEffectView *effectView;
@property (retain) SGBannerView *bannerView;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)control;
- (void)dismissJunkView;
- (id)makeJunkView;
- (void)reportJunk;
- (BOOL)shouldBeFullWidth;
- (BOOL)shouldDisplay;

@end
