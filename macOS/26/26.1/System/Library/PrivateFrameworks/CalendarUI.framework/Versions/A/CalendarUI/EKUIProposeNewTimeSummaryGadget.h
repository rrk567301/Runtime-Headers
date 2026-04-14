@interface EKUIProposeNewTimeSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)summaryString;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
