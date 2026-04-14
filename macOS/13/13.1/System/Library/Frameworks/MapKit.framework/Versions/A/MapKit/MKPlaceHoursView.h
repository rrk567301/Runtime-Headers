@class _MKLocalizedHoursBuilder, NSArray, NSDictionary, GEOBusinessHours, NSLayoutConstraint, _MKUILabel;
@protocol MKPlaceHoursViewDelegate;

@interface MKPlaceHoursView : NSView {
    NSArray *_labels;
    _MKUILabel *_topLabel;
    _MKUILabel *_topMessageLabel;
    _MKUILabel *_topDayOrHourLabel;
    _MKUILabel *_bottomMessageLabel;
    _MKUILabel *_collapsableOpenStateLabel;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaselineConstraints;
    NSArray *_baselineToBottomConstraints;
    NSArray *_topAndBottomLabelConstraints;
    NSArray *_placeDailyHours;
}

@property (nonatomic) unsigned long long placeHoursViewOptions;
@property (retain, nonatomic) _MKLocalizedHoursBuilder *hoursBuilder;
@property (retain, nonatomic) NSDictionary *formattedHoursData;
@property (retain, nonatomic) GEOBusinessHours *businessHours;
@property (readonly, nonatomic) _MKUILabel *topLabel;
@property (weak, nonatomic) id<MKPlaceHoursViewDelegate> hoursDelegate;

- (void).cxx_destruct;
- (void)_commonInit;
- (BOOL)wantsDefaultClipping;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (id)initWithBusinessHours:(id)a0;
- (id)hoursGrayColor;
- (void)setTopLabel:(id)a0;
- (void)applyRulesForTopAndBottomLabel;
- (id)_standardLabel;
- (void)_updateOptionsForCollapsingToSingleLineAndColor;
- (void)_updateHoursView;
- (void)_collapseAllLabelsFromOptions;
- (BOOL)_shouldCollapseTopMessageLabel;

@end
