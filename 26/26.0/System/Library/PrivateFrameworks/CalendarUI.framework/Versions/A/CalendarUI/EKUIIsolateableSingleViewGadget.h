@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget

@property BOOL isDoneWithGrouping;
@property (weak) EKUIIsolateableSingleViewGadget *linkedGadget;
@property (retain) NSArray *groupedGadgets;

- (void)setObject:(id)a0;
- (BOOL)hasData;
- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (BOOL)isGroupedGadget;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)isIsolated;
- (BOOL)shouldDisplay;
- (void)updateIsDoneGroupingForGroup;
- (BOOL)wantsToDisplay;

@end
