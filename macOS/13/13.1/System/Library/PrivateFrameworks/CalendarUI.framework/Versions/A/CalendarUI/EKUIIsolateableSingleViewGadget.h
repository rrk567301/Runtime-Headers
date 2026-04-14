@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget

@property BOOL isDoneWithGrouping;
@property (weak) EKUIIsolateableSingleViewGadget *linkedGadget;
@property (retain) NSArray *groupedGadgets;

- (void)setObject:(id)a0;
- (BOOL)hasData;
- (void).cxx_destruct;
- (void)setExpanded:(BOOL)a0;
- (BOOL)needsExpansion;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)wantsToDisplay;
- (BOOL)isIsolated;
- (BOOL)isGroupedGadget;
- (void)updateIsDoneGroupingForGroup;

@end
