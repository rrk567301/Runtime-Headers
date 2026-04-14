@class NSString, TFFeedbackForm, TFFeedbackSession, TFFeedbackDataContainer;
@protocol TFFeedbackDataSource, TFFeedbackFormPresenterView;

@interface TFFeedbackFormPresenter : NSObject <TFFeedbackDataContainerObserver, TFFeedbackDataUpdateProxy>

@property (readonly, nonatomic) TFFeedbackForm *form;
@property (readonly, nonatomic) TFFeedbackDataContainer *dataContainer;
@property (weak, nonatomic) id<TFFeedbackFormPresenterView> presenterView;
@property (readonly, nonatomic) id<TFFeedbackDataSource> feedbackDataSource;
@property (readonly, nonatomic) TFFeedbackSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)feedbackDataContainer:(id)a0 didUpdateValuesForGroupIdentifiers:(id)a1 entryIdentifiers:(id)a2;
- (void)didUpdateEntry:(id)a0 toGroupInclusionBool:(BOOL)a1;
- (void)didUpdateEntry:(id)a0 toString:(id)a1 editInProgress:(BOOL)a2;
- (id)initWithForm:(id)a0 dataContainer:(id)a1 session:(id)a2;
- (void)prepareViewForForm;
- (unsigned long long)numberOfEntryGroupsInForm;
- (unsigned long long)numberOfVisibleItemsInGroupAtIndex:(long long)a0;
- (id)visibleEntryAtGroupIndex:(long long)a0 entryIndex:(long long)a1;
- (id)headerTextForGroupAtIndex:(long long)a0;
- (id)headerTextLinkMapForGroupAtIndex:(long long)a0;
- (id)footerTextForGroupAtIndex:(long long)a0;
- (id)footerTextLinkMapForGroupAtIndex:(long long)a0;
- (id)_indicesOfGroupsWithIdentifiers:(id)a0;
- (id)_indexPathsOfVisibleEntriesWithIdentifiers:(id)a0;
- (void)presenterViewDidInitiateFeedbackSubmission:(id)a0;
- (void)presenterViewDidCancelFeedbackSubmission:(id)a0;
- (void)showSubmissionFailureWithMessage:(id)a0;

@end
