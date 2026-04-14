@class NSMutableSet;
@protocol CalUILocationSearchManagerDelegate;

@interface CalUILocationSearchManager : NSObject

@property (weak) id<CalUILocationSearchManagerDelegate> delegate;
@property (retain) NSMutableSet *pendingRequests;
@property BOOL resultsDisplayed;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;
- (void)displaySearchResults;
- (void)registerPendingRequestWithKey:(id)a0;
- (void)unregisterPendingRequestWithKey:(id)a0;
- (void)cancelAllPendingRequests;
- (void)unregisterAllPendingRequests;
- (BOOL)isRequestPendingForKey:(id)a0;
- (BOOL)isCalDAVsearchPending;
- (BOOL)isLocalSearchPending;
- (BOOL)shouldDisplayResults;
- (void)startProgressIndicatorWithFailSafe;
- (BOOL)shouldRequestKeyDisplayResultsWhenCompleted:(id)a0;

@end
