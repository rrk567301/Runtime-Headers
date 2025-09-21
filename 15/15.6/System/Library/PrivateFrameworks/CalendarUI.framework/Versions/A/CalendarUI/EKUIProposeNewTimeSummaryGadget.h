@interface EKUIProposeNewTimeSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (char)isEditable;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (char)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
