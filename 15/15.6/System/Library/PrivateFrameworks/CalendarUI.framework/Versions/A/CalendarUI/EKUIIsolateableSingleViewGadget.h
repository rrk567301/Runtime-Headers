@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget

@property char isDoneWithGrouping;
@property (weak) EKUIIsolateableSingleViewGadget *linkedGadget;
@property (retain) NSArray *groupedGadgets;

- (void).cxx_destruct;
- (char)hasData;
- (void)setObject:(id)a0;
- (char)needsExpansion;
- (void)setExpanded:(char)a0;
- (char)updateWithDiff:(id)a0;
- (char)isGroupedGadget;
- (char)isIsolated;
- (char)shouldDisplay;
- (void)updateIsDoneGroupingForGroup;
- (char)wantsToDisplay;

@end
