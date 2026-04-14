@class SPQueryTask, NSArray, NSString, _SPResultsArrays, NSObject;
@protocol SPSearchAgentDelegate;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {
    long long _updatesDisabled;
    NSString *_lastQueryString;
}

@property (retain) SPQueryTask *queryTask;
@property (retain) _SPResultsArrays *lastResponse;
@property (retain) NSArray *sections;
@property BOOL infinitePatience;
@property (weak) NSObject<SPSearchAgentDelegate> *delegate;
@property BOOL queryComplete;

+ (void)preheat;
+ (id)sharedInstance;
+ (id)sharedGeneralInstance;

- (void)didReceiveResponse:(id)a0;
- (void)clear;
- (void)invalidate;
- (void)updateWithQueryContext:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)disableUpdates;
- (void)enableUpdates;
- (BOOL)queryInProgress;
- (void)updatesDisabled;
- (void)invalidateCurrentQuery;
- (void)invalidateQuery:(id)a0;
- (void)processQueryResponse:(id)a0;
- (void)queryTask:(id)a0 gotResponse:(id)a1;
- (void)updateWithResponse:(id)a0;
- (void)updatesEnabled;

@end
