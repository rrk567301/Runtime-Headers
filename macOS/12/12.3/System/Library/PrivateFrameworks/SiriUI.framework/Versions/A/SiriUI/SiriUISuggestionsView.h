@class NSString, SiriUIAcousticIDSpinner, SiriUIContentLabel, NSMutableArray, NSColor;
@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : NSView {
    SiriUIContentLabel *_headerLabel;
    SiriUIContentLabel *_oldHeaderLabel;
    SiriUIContentLabel *_subheaderLabel;
    SiriUIContentLabel *_largeSubheaderLabel;
    BOOL _firstSuggestionPresentation;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    BOOL _useSmallText;
    NSMutableArray *_allConstraints;
}

@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *subheaderText;
@property (copy, nonatomic) NSString *largeSubheaderText;
@property (copy, nonatomic) NSColor *textColor;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) BOOL useSmallText;
@property (nonatomic) BOOL springAnimateIn;
@property (weak, nonatomic) id<SiriUISuggestionsViewDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void)updateConstraints;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (double)_headerFontSize;
- (void)showAcousticIDSpinner;
- (void)hideAcousticIDSpinner;
- (double)_subheaderFontSize;
- (double)_largeSubheaderFontSize;
- (double)_headerToSubheaderOffset;
- (double)_headerToLargeSubheaderOffset;
- (void)_animateHeaderOut;
- (void)_updateHeaderFontSize;
- (void)_animateHeaderIn;
- (void)_loadSubheaderViewIfNeeded;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_reallyShowAcousticIDSpinner;
- (double)_suggestionSpacing;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (double)_suggestionFontSize;
- (void)acousticIDSpinnerDidHide:(id)a0;

@end
