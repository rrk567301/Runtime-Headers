@class MKIncidentTextView, NSString, NSImage, NSLayoutConstraint, NSDate, _MKUILabel, MKImageView;

@interface MKIncidentDetailCell : MKTableViewCell <MKMultiLineLabelContainer> {
    _MKUILabel *_titleLabel;
    MKImageView *_iconImageView;
    MKIncidentTextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_titleFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *incidentDescription;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastUpdateDisplayString:(id)a0;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setConstraints;
- (void)_updateLastUpdatedLabel;
- (void)infoCardThemeChanged;
- (id)initWithReuseIdentifier:(id)a0;
- (id)multilineTextFieldsWithinContainer;

@end
