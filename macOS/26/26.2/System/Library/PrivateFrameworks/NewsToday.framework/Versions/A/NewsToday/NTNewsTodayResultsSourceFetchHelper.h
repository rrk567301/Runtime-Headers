@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (id)initWithSectionQueueDescriptors:(id)a0;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (void).cxx_destruct;
- (void)removeSectionDescriptors:(id)a0;
- (id)init;

@end
