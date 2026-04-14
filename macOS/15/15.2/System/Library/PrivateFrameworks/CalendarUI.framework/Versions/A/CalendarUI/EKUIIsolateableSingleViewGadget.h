@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget

@property BOOL isDoneWithGrouping;
@property (weak) EKUIIsolateableSingleViewGadget *linkedGadget;
@property (retain) NSArray *groupedGadgets;

- (BOOL)hasData;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)needsExpansion;
- (void)setExpanded:(BOOL)a0;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)isGroupedGadget;
- (BOOL)isIsolated;
- (BOOL)shouldDisplay;
- (void)updateIsDoneGroupingForGroup;
- (BOOL)wantsToDisplay;

@end
