@class FCFeedItemServiceCursor, FCPeopleAlsoReadConfiguration, FCReadingHistory, NSArray, NSDate;
@protocol FCContentContext;

@interface FCPeopleAlsoReadArticlesOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) FCPeopleAlsoReadConfiguration *configuration;
@property (retain, nonatomic) FCReadingHistory *readingHistory;
@property (copy, nonatomic) FCFeedItemServiceCursor *cursor;
@property (copy, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSArray *resultFeedItems;
@property (retain, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)_continueOperation;
- (void)_continueOperationWithSeedArticleIDs:(id)a0;
- (id)_feedItemFromArticleRecord:(id)a0 articleListsByArticleID:(id)a1;
- (id)initWithContentContext:(id)a0 configuration:(id)a1 readingHistory:(id)a2 cursor:(id)a3;

@end
