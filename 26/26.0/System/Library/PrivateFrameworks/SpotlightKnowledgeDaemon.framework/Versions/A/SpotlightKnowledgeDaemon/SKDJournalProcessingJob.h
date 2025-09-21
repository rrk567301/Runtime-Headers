@class NSDictionary, NSArray;

@interface SKDJournalProcessingJob : SKDBaseCSItemProcessingJob

@property (readonly, nonatomic) NSDictionary *bgstOptions;
@property (readonly, nonatomic) NSArray *requiredBundleIDs;
@property (readonly, nonatomic) NSArray *excludedBundleIDs;
@property (readonly, nonatomic) NSArray *requiredAttributes;
@property (readonly, nonatomic) NSArray *fetchAttributes;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(id)a1 pipelines:(id)a2;

@end
