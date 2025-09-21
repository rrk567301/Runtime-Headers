@class NSString, IMDIndexingContext, NSMutableSet, NSMutableArray, IMTimingCollection;

@interface IMDCoreSpotlightMessageIndexingJob : NSObject <IMDMessageIndexingJob>

@property (readonly, nonatomic) NSMutableSet *populatedChatItems;
@property (readonly, nonatomic) NSMutableArray *indexableItems;
@property (readonly, nonatomic) NSMutableArray *rejectedItems;
@property (readonly, nonatomic) IMDIndexingContext *context;
@property (readonly, nonatomic) IMTimingCollection *timing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
