@class NSMutableSet;
@protocol CalUILocationSearchManagerDelegate;

@interface CalUILocationSearchManager : NSObject

@property (weak) id<CalUILocationSearchManagerDelegate> delegate;
@property (retain) NSMutableSet *pendingRequests;
@property BOOL resultsDisplayed;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;
- (void)cancelAllPendingRequests;
- (void)displaySearchResults;
- (BOOL)isCalDAVsearchPending;
- (BOOL)isLocalSearchPending;
- (BOOL)isRequestPendingForKey:(id)a0;
- (void)registerPendingRequestWithKey:(id)a0;
- (BOOL)shouldDisplayResults;
- (BOOL)shouldRequestKeyDisplayResultsWhenCompleted:(id)a0;
- (void)startProgressIndicatorWithFailSafe;
- (void)unregisterAllPendingRequests;
- (void)unregisterPendingRequestWithKey:(id)a0;

@end
