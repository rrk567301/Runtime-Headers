@interface EKUITravelTimeSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (id)summaryString;
- (id)recurrenceDifferenceDescription;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (char)shouldDisplay;
- (id)summaryStringForEvent:(id)a0;

@end
