@class SGBannerDividerParameter, NSString, NSArray, SGSuggestionAction, NSVisualEffectView, NSAttributedString, NSColor;
@protocol SGSuggestion;

@interface CoreSuggestionsUI.SGBannerContent : NSObject {
    void /* unknown type, empty encoding */ bannerForVisionDevice;
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ images;
    void /* function */ actionTitle;
    void /* function */ iconSFSymbols;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSAttributedString *attributedSubtitle;
@property (nonatomic) long long accessoryType;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) id<SGSuggestion> suggestion;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) double primaryActionButtonWidth;
@property (nonatomic) double closeButtonWidth;
@property (nonatomic) long long actionButtonType;
@property (nonatomic, retain) NSVisualEffectView *backgroundVisualEffectView;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, retain) SGBannerDividerParameter *bannerDivider;
@property (nonatomic) BOOL suggestionCategorySupportsBatchDismissal;
@property (nonatomic, retain) SGSuggestionAction *primaryAction;
@property (nonatomic, retain) SGSuggestionAction *dismissAction;
@property (nonatomic) double closeButtonXAnchorOffset;
@property (nonatomic) BOOL prominentActionButton;
@property (nonatomic, copy) NSArray *iconSFSymbols;
@property (nonatomic) BOOL disableGlassPlatter;
@property (nonatomic, retain) SGSuggestionAction *feedbackAction;
@property (nonatomic) BOOL ignoreSafeAreaInsets;

- (id)init;
- (void).cxx_destruct;

@end
