@class NSMutableArray, NSString, NSLayoutConstraint, _MKPlaceReservationInfo, NSButton, NSSegmentedControl;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {
    NSSegmentedControl *_openTimesControl;
    NSButton *_buttonMakeReservation;
    NSButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
}

@property (readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo;
@property (nonatomic) unsigned long long selectedTimeIndex;
@property (retain, nonatomic) NSString *selectedTimeString;

- (void).cxx_destruct;
- (void)_mapkit_tintColorDidChange;
- (id)_newButtonForAttribution:(BOOL)a0;
- (id)_attributedStringFromButtonTitle:(id)a0 useSmallFont:(BOOL)a1;
- (void)_actionMakeReservation;
- (void)_updateTintColor;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (void)_updateMutableConstraints;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (void)_updateButtonTitleAttributes;
- (id)initWithReservationInfo:(id)a0;

@end
