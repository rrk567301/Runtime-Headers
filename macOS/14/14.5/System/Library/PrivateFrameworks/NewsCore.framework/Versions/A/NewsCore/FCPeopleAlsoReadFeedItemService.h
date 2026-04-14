@class FCReadingHistory;
@protocol FCNewsAppConfigurationManager, FCContentContext;

@interface FCPeopleAlsoReadFeedItemService : NSObject <FCFeedItemServiceType>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCReadingHistory *readingHistory;

- (id)init;
- (void).cxx_destruct;
- (void)fetchFeedItemsWithCursor:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfigurationManager:(id)a0 contentContext:(id)a1 readingHistory:(id)a2;

@end
