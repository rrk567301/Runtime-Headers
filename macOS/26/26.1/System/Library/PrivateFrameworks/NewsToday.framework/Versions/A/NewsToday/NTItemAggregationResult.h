@class NSDictionary, NSSet;

@interface NTItemAggregationResult : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (copy, nonatomic) NSSet *unusedSectionDescriptors;
@property (copy, nonatomic) NSDictionary *debugInspectionsBySectionDescriptor;
@property (nonatomic) double slotsUsed;
@property (nonatomic) double headlineScale;
@property (readonly, nonatomic) unsigned long long itemCount;

- (double)headlineSlotCostWithSlotCost:(double)a0;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)a0 unusedSectionDescriptors:(id)a1 debugInspectionsBySectionDescriptor:(id)a2;
- (double)sectionOverheadSlotCostWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithHeadlineScale:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)slotCostWithInfo:(id)a0;
- (id)init;

@end
