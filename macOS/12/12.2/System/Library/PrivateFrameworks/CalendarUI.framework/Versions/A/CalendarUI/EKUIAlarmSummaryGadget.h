@interface EKUIAlarmSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (BOOL)shouldDisplay;
- (id)attributedSummaryString;

@end
