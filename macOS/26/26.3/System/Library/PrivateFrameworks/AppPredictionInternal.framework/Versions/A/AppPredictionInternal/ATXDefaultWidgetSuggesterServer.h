@class NSString, NSXPCListener;

@interface ATXDefaultWidgetSuggesterServer : NSObject <NSXPCListenerDelegate, ATXDefaultWidgetSuggesterInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateCachedValuesWithActivity:(id)a0;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)shouldSuggestTVWithCompletionHandler:(id /* block */)a0;

@end
