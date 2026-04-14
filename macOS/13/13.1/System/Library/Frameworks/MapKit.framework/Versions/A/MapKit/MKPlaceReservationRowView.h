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
- (void)_actionMakeReservation;
- (void)_mapkit_tintColorDidChange;
- (id)initWithReservationInfo:(id)a0;
- (id)_newButtonForAttribution:(BOOL)a0;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (double)_buttonTopMargin;
- (double)_buttonBottomMargin;
- (id)_attributedStringFromButtonTitle:(id)a0 useSmallFont:(BOOL)a1;
- (void)_updateWithReservationInfo;
- (void)_setupImmutableConstraints;
- (void)_updateMutableConstraints;
- (void)_updateButtonTitleAttributes;
- (void)_updateTintColor;

@end
