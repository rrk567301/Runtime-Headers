@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget

@property BOOL shouldSuppressMiniCal;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (BOOL)isExpanded;
- (id)labelString;
- (id)control;
- (void)_updateDatePickerDate;
- (void)datePickerChangedToDate:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
