@class IIDatePickerWithMiniCal, NSString;

@interface EKUIDateTimeGadget : EKUILabeledGadget <IIDatePickerWithMiniCalDelegate>

@property (retain) IIDatePickerWithMiniCal *datePicker;
@property BOOL shouldSuppressMiniCal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (double)baselineOffset;
- (id)initWithViewController:(id)a0;
- (id)dateValue;
- (id)startDate;
- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (id)control;
- (BOOL)datePickerShouldDisplayMiniCal:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;
- (BOOL)disableDateChanges;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)timeAccessibilityIdentifier;
- (void)updateDatePickerWithDate:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
