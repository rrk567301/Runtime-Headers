@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (id)sectionDescriptorsAtHeadsOfQueues;
- (void).cxx_destruct;
- (id)initWithSectionQueueDescriptors:(id)a0;
- (id)init;
- (void)removeSectionDescriptors:(id)a0;

@end
