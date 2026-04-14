@class NSURL, _MKUILabel, MKImageView, _MKLocalizedHoursBuilder, MKVibrancyAwareLabelView, _MKDataHeaderModel, MKPlaceSectionRowView, NSLayoutConstraint, NSString, _MKTokenAttributedString, NSLayoutGuide, NSArray, NSView;
@protocol MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem, GEOTransitLineItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver> {
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    MKImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    MKVibrancyAwareLabelView *_thirdLabel;
    NSView *_thirdDisplayedLabel;
    NSArray *_constraints;
    NSLayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    NSLayoutConstraint *_lastLabelToBottomConstraint;
    double _secondLabelToFirstLabelConstraintConstantMax;
    double _secondLabelToFirstLabelConstraintConstantMin;
    BOOL _isUserLocation;
    BOOL _optionSmallScreen;
    BOOL _constraintsCreated;
    BOOL _notVerified;
    double _lastMaskAlphaValueApplied;
}

@property (retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder;
@property (readonly, nonatomic) double lastLabelToBottomConstant;
@property (readonly, nonatomic) BOOL shouldShowCallToActionWithRatingHeaderInfo;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKPlaceCardHeaderViewControllerDelegate> delegate;
@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (id)titleFont;
- (void)_commonInit;
- (id)_currentTitle;
- (void)viewDidLoad;
- (void)updateViews;
- (void)_createViews;
- (void)updateContent;
- (void)infoCardThemeChanged;
- (BOOL)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (void)ETAProviderUpdated:(id)a0;
- (void)updateHeaderTitle;
- (void)updateContentAlpha;
- (void)setConstraints;
- (id)secondaryNameTimingFunction;
- (id)initWithPlaceItem:(id)a0 layout:(unsigned long long)a1;
- (id)initWithLineItem:(id)a0 layout:(unsigned long long)a1;
- (void)animateSecondLabelWithPercentage:(double)a0;
- (double)secondaryNameLabelPadding;
- (BOOL)_hasSecondaryName;
- (id)_secondaryNameTitle;
- (id)_verifiedText;
- (id)_reviewLabelText;
- (id)_openStateString;
- (void)_setupDatas;
- (BOOL)_isLikelyToShowDistance;
- (void)_loadLogo;
- (BOOL)_mapItemShouldDisplayDistance:(id)a0;
- (id)newLabel;
- (void)_contentSizeDidChangeNotificationHandler;

@end
