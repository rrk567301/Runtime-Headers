@class IIDatePickerWithMiniCal, NSString;

@interface EKUIDateTimeGadget : EKUILabeledGadget <IIDatePickerWithMiniCalDelegate>

@property (retain) IIDatePickerWithMiniCal *datePicker;
@property char shouldSuppressMiniCal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)startDate;
- (double)baselineOffset;
- (void)setExpanded:(char)a0;
- (id)control;
- (id)initWithViewController:(id)a0;
- (char)datePickerShouldDisplayMiniCal:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (char)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;
- (char)disableDateChanges;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (char)shouldDisplay;
- (char)shouldDisplayWhenNotEditable;
- (id)timeAccessibilityIdentifier;
- (void)updateDatePickerWithDate:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
