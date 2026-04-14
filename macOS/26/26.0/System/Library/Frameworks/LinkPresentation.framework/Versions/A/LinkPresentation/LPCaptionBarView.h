@class NSString, LPVerticalTextStackView, LPPlayButtonView, LPCaptionBarStyle, LPComponentView, LPCollaborationFooterView, LPCaptionBarPresentationProperties, LPCaptionBarAccessoryView, LPBackgroundColorView, NSRegularExpression, LPInlineMediaPlaybackInformation, LPCaptionBarButtonView;
@protocol LPSubtitleButtonContainer, LPTextStyleable;

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate, LPComponentMediaPlayable> {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    LPComponentView *_leftIconView;
    LPComponentView *_rightIconView;
    LPPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPCaptionBarButtonView *_buttonView;
    LPCaptionBarButtonView *_secondaryButtonView;
    LPComponentView *_leftIconBadgeView;
    LPComponentView *_rightIconBadgeView;
    LPBackgroundColorView *_backgroundColorView;
    LPVerticalTextStackView *_textStackView;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    BOOL _hasEverBuilt;
    NSString *_captionType;
}

@property (nonatomic) BOOL useProgressSpinner;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } textSafeAreaInset;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } backgroundOutset;
@property (retain, nonatomic) LPCollaborationFooterView *collaborationFooterView;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (retain, nonatomic) LPComponentView<LPTextStyleable> *aboveTopCaptionView;
@property (retain, nonatomic) LPComponentView<LPTextStyleable> *topCaptionView;
@property (retain, nonatomic) LPComponentView<LPTextStyleable, LPSubtitleButtonContainer> *bottomCaptionView;
@property (retain, nonatomic) LPComponentView<LPTextStyleable> *belowBottomCaptionView;
@property (readonly, nonatomic) BOOL captionTextIsTruncated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0;
- (void)addSubview:(id)a0;
- (id)playable;
- (id)button;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)secondaryButton;
- (void).cxx_destruct;
- (void)animateOut;
- (id)subtitleButton;
- (id)primaryIconView;
- (void)updateTextStack;
- (void)_buildViewsForCaptionBarIfNeeded;
- (void)_createBackgroundViewIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutCaptionBarForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (void)animateInWithBaseAnimation:(id)a0 currentTime:(double)a1;
- (BOOL)hasIconViewEqualToComponentView:(id)a0;
- (id)initWithHost:(id)a0 style:(id)a1 presentationProperties:(id)a2 captionType:(id)a3;
- (void)layoutComponentView;
- (id)layoutExclusionsForView:(id)a0;
- (void)setPlaybackInformation:(id)a0;
- (void)setPresentationProperties:(id)a0;
- (void)updateDisclosureIndicators;

@end
