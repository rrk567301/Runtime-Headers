@class NSMutableSet;
@protocol CalUILocationSearchManagerDelegate;

@interface CalUILocationSearchManager : NSObject

@property (weak) id<CalUILocationSearchManagerDelegate> delegate;
@property (retain) NSMutableSet *pendingRequests;
@property char resultsDisplayed;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;
- (void)cancelAllPendingRequests;
- (void)displaySearchResults;
- (char)isCalDAVsearchPending;
- (char)isLocalSearchPending;
- (char)isRequestPendingForKey:(id)a0;
- (void)registerPendingRequestWithKey:(id)a0;
- (char)shouldDisplayResults;
- (char)shouldRequestKeyDisplayResultsWhenCompleted:(id)a0;
- (void)startProgressIndicatorWithFailSafe;
- (void)unregisterAllPendingRequests;
- (void)unregisterPendingRequestWithKey:(id)a0;

@end
