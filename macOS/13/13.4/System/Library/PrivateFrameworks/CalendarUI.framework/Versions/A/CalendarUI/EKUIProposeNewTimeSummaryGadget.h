@interface EKUIProposeNewTimeSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (BOOL)isEditable;
- (id)summaryString;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
