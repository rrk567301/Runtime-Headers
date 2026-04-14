@class NSString, NSArray, IMDIndexingContext, NSError, NSObject, IMSpotlightClientState;
@protocol OS_dispatch_group, IMDSpotlightIndex;

@interface IMDCoreSpotlightIndexingJob : NSObject

@property (readonly, nonatomic) NSString *transactionID;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;
@property (readonly, nonatomic) id<IMDSpotlightIndex> index;
@property (retain, nonatomic) IMSpotlightClientState *clientState;
@property (retain, nonatomic) NSArray *searchableItems;
@property (retain, nonatomic) NSArray *rejectedItems;
@property (readonly, nonatomic) IMDIndexingContext *context;

+ (id)_timeoutError;

- (id)initWithContext:(id)a0;
- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_contextHasEffectsOnClientState;
- (void)_applyContextToClientState;
- (void)_beginIndexing;
- (void)_donateToSuggestions;
- (void)_finishIndexingAndSaveClientState;
- (void)_indexToSpotlight;
- (void)_loadClientStateIfNeeded;
- (BOOL)_shouldWithdrawRejectionsFromSpotlight;
- (void)_startJob;
- (void)_withdrawRejectionsFromSpotlight;
- (id)initWithIndex:(id)a0 context:(id)a1;

@end
