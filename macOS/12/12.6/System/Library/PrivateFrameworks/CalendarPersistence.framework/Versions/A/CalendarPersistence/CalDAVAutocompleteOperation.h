@class NSString, NSArray, CalLimitingQueue, NSDictionary, CalDAVPrincipalSearchPropertySet, NSMutableArray;
@protocol CalDAVAutocompleOperationDelegate;

@interface CalDAVAutocompleteOperation : NSObject

@property (retain) id<CalDAVAutocompleOperationDelegate> delegate;
@property (retain) CalDAVPrincipalSearchPropertySet *searchSet;
@property (retain) NSString *searchString;
@property (retain) NSArray *searchTypes;
@property (retain) NSString *collectionSetName;
@property (retain) NSString *host;
@property (retain) CalLimitingQueue *limitingQueue;
@property (retain) NSDictionary *searchTerms;
@property (retain) NSMutableArray *currentResults;
@property BOOL isCancelled;
@property (readonly) NSArray *results;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cancelQuery;
- (id)searchFor:(id)a0 ofTypes:(id)a1 withAccountInfoProvider:(id)a2;
- (void)_launchAgentSearch;
- (void)resetQuery;
- (void)_handleOperationResults:(id)a0;

@end
