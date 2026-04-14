@class IIDatePickerWithMiniCal, NSString;

@interface EKUIDateTimeGadget : EKUILabeledGadget <IIDatePickerWithMiniCalDelegate>

@property (retain) IIDatePickerWithMiniCal *datePicker;
@property BOOL shouldSuppressMiniCal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)startDate;
- (double)baselineOffset;
- (id)initWithViewController:(id)a0;
- (void)setExpanded:(BOOL)a0;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)datePickerChangedToDate:(id)a0;
- (BOOL)datePickerShouldDisplayMiniCal:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (id)dateAccessibilityIdentifier;
- (id)timeAccessibilityIdentifier;
- (void)updateDatePickerWithDate:(id)a0;
- (double)preferredControlWidth;

@end
