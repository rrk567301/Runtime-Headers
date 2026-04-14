@class FCStreamingResults, NSString, FCTagRecordSource, NSError, FCAssetManager, FCCKContentDatabase;
@protocol FCContentContext;

@interface FCTagSearchOperation : FCOperation

@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) FCStreamingResults *searchResults;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) unsigned long long batchSize;
@property (copy) id /* block */ searchResultsBlock;

- (void).cxx_destruct;
- (id)_localIdentifier;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (id)_establishStreamOfTags;
- (void)_performSearchQuery:(id /* block */)a0;

@end
