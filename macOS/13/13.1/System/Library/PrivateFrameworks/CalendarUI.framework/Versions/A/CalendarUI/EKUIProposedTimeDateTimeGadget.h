@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget

@property BOOL shouldSuppressMiniCal;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (BOOL)isExpanded;
- (id)labelString;
- (id)control;
- (void)updateWithChanges:(id)a0;
- (void)datePickerChangedToDate:(id)a0;
- (void)_updateDatePickerDate;

@end
