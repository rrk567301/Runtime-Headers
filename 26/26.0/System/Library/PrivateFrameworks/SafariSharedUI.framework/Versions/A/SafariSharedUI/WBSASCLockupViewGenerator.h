@class NSString, NSMutableArray, NSMutableDictionary;

@interface WBSASCLockupViewGenerator : NSObject <ASCLockupViewDelegate> {
    id /* block */ _pendingGenerateLockupViewsCompletionHandler;
    NSMutableArray *_lockupViewsPendingLoad;
    NSMutableArray *_succesfullyLoadedLockupViews;
    NSMutableDictionary *_lockupRequestToRequiredTeamIDMap;
    BOOL _maintainRequestedOrderOfApps;
    NSMutableDictionary *_adamIDToRequestedOrderMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGenerator;
+ (id)_lockupContextForLockupViewType:(long long)a0;
+ (id)_lockupViewGroupForLockupViewType:(long long)a0;
+ (id)cloudLockupViewGroup;
+ (id)importLockupViewGroup;

- (void).cxx_destruct;
- (void)generateLockupViewsForAvailableApps:(id)a0 lockupViewType:(long long)a1 maintainRequestedOrderOfApps:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)lockupViewDidBeginRequest:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (void)_allLockupViewRequestsCompleted;
- (void)_lockupViewRequestedCompleted:(id)a0 loadedSuccessfully:(BOOL)a1;

@end
