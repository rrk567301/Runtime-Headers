@class NSView;

@interface SiriSharedUI.SiriSharedUIDropletContainerView : SiriSharedUIStandardView {
    void /* unknown type, empty encoding */ backgroundInset;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ shouldExecuteContinuerAction;
    void /* unknown type, empty encoding */ gaussianBlurAmount;
    void /* unknown type, empty encoding */ gaussianBlurDuration;
    void /* unknown type, empty encoding */ mitosisScaleAmount;
    void /* unknown type, empty encoding */ mitosisIntoSnippetKeytimes;
    void /* unknown type, empty encoding */ mitosisOutOfSnippetKeytimes;
    void /* unknown type, empty encoding */ removalAnimationDuration;
    void /* unknown type, empty encoding */ suggestionBlurAnimationValue;
    void /* unknown type, empty encoding */ edgeBleedDurationMultiplier;
    void /* unknown type, empty encoding */ innerGlowRadius;
    void /* unknown type, empty encoding */ solariumSnippetInnerGlowRadius;
    void /* unknown type, empty encoding */ solariumLatencyInnerGlowRadius;
    void /* unknown type, empty encoding */ outerGlowRadius;
    void /* unknown type, empty encoding */ isMacTextField;
    void /* unknown type, empty encoding */ didScheduleIntelligentLightAnimation;
    void /* unknown type, empty encoding */ latencyLightIsOn;
    void /* unknown type, empty encoding */ pillMaskFrame;
    void /* unknown type, empty encoding */ containerViewPosition;
    void /* unknown type, empty encoding */ shouldBlurUponTransition;
    void /* unknown type, empty encoding */ didAnimateBlurIn;
    void /* unknown type, empty encoding */ didAnimateBlurOut;
    void /* unknown type, empty encoding */ removeOnNextLayoutPass;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ glassContainerView;
    void /* unknown type, empty encoding */ intelligentLightLayer;
    void /* unknown type, empty encoding */ edgeLightOutsideEffect;
    void /* unknown type, empty encoding */ persistsIntelligentLightAnimation;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ notificationObservers;
    void /* unknown type, empty encoding */ solariumCarouselDamping;
    void /* unknown type, empty encoding */ solariumCarouselStiffness;
    void /* unknown type, empty encoding */ solariumCarouselMass;
    void /* unknown type, empty encoding */ enableLight;
    void /* unknown type, empty encoding */ enableLightBorder;
    void /* unknown type, empty encoding */ enableLightShadow;
    void /* unknown type, empty encoding */ previousSnippetHeight;
    void /* unknown type, empty encoding */ nextSnippetHeight;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ contentLightEffectView;
    void /* unknown type, empty encoding */ shimmerEffectView;
    void /* unknown type, empty encoding */ latencyLightRimEffectView;
    void /* unknown type, empty encoding */ latencyLightInnerEffectView;
    void /* unknown type, empty encoding */ useFakeRims;
    void /* unknown type, empty encoding */ enableLatency;
    void /* unknown type, empty encoding */ snippetBackgroundView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setSuggestionFocused:(BOOL)a0;

@end
