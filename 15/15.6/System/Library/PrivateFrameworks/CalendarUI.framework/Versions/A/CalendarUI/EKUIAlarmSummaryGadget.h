@interface EKUIAlarmSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (id)recurrenceDifferenceDescription;
- (id)attributedSummaryString;
- (char)differenceFromOriginal:(id)a0 added:(id *)a1 removed:(id *)a2;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (char)shouldDisplay;

@end
