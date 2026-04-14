@class NSString, NSDate;
@protocol FCPersonalizationFunctionProviding, FCFeedPersonalizing, FCCoreConfigurationManager;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator>

@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id<FCFeedPersonalizing, FCPersonalizationFunctionProviding> feedPersonalizer;
@property (copy, nonatomic) NSDate *filterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfigurationManager:(id)a0 feedPersonalizer:(id)a1 filterDate:(id)a2;
- (id)aggregateSections:(id)a0 itemsBySectionDescriptor:(id)a1 budgetInfo:(id)a2 todayData:(id)a3;
- (id)init;
- (id)_sectionFilterTransformationWithDescriptor:(id)a0 todayData:(id)a1 priorClusterIDsInOtherSections:(id)a2 priorClusterIDsInSection:(id)a3 otherArticleIDs:(id)a4;
- (id)_itemsForSection:(id)a0 items:(id)a1 todayData:(id)a2 budgetInfo:(id)a3 previouslyChosenItems:(id)a4 priorClusterIDsInOtherSections:(id)a5 sectionItemsLimit:(unsigned long long)a6 otherArticleIDs:(id)a7 remainingSlots:(double)a8 slotsUsed:(double *)a9 noMoreItemsToGive:(BOOL *)a10 noRoomForMoreItems:(BOOL *)a11;
- (void).cxx_destruct;

@end
