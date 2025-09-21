@class IMDIndexingContext, NSMutableArray, NSString;

@interface IMDINInteractionMessageDonationJob : NSObject <IMDMessageIndexingJob>

@property (readonly, nonatomic) IMDIndexingContext *context;
@property (readonly, nonatomic) NSMutableArray *interactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
