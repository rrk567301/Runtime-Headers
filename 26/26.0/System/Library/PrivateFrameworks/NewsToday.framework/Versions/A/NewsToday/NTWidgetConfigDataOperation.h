@class NSDictionary, NSArray;
@protocol FCContentContext, FCCoreConfiguration;

@interface NTWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) NSArray *expectedArticleIDs;
@property (copy, nonatomic) NSArray *expectedArticleListIDs;
@property (copy, nonatomic) id /* block */ widgetConfigDataCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)_finishByConvertingRecordsWithArticlesByID:(id)a0 articleListsByID:(id)a1 tagsByID:(id)a2;
- (void)_finishByFetchingRecordsForArticleIDs:(id)a0 articleListIDs:(id)a1;

@end
