@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget

@property char shouldSuppressMiniCal;

+ (id)interestedChangeKeys;

- (char)isExpanded;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)_updateDatePickerDate;
- (void)datePickerChangedToDate:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
