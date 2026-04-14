@class NSString, NSXPCListener;

@interface ATXSettingsActionsServer : NSObject <NSXPCListenerDelegate, ATXSettingsActionsInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)recentActionsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestedActionsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_suggestedActionsWithDayZeroBackfillForDeduping:(id)a0 clientBundleID:(id)a1;
- (id)_dummyDayZeroSettingsActionsForDeduping;
- (id)_dummyDayZeroWatchAppSettingsActionsForDeduping;
- (id)_suggestedActionsWithRequest:(id)a0;

@end
