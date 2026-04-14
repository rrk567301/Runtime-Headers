@class LPQuoteView, LPContactsBadgeView, NSView, LPCollaborationHandleView, LPCaptionBarView, LPComponentView, LPImageView;

@interface LPLinkViewComponents : NSObject

@property (retain, nonatomic) LPCaptionBarView *captionBar;
@property (retain, nonatomic) LPComponentView *media;
@property (retain, nonatomic) NSView *mediaBackground;
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar;
@property (retain, nonatomic) LPQuoteView *quote;
@property (retain, nonatomic) LPImageView *backgroundImage;
@property (retain, nonatomic) LPContactsBadgeView *contactsBadge;
@property (retain, nonatomic) LPCollaborationHandleView *collaborationHandle;

- (void).cxx_destruct;
- (void)applyToAllViews:(id /* block */)a0;

@end
