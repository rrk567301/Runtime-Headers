@interface EKUIAlarmSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (id)recurrenceDifferenceDescription;
- (id)attributedSummaryString;
- (BOOL)differenceFromOriginal:(id)a0 added:(id *)a1 removed:(id *)a2;
- (id)paragraphAttributes;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (BOOL)shouldDisplay;

@end
