@class NSString, NSXPCListener;

@interface ATXParameterSuggestionServer : NSObject <ATXProactivePredictionClientXPCInterface, NSXPCListenerDelegate> {
    NSString *_machServiceName;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)parameterSuggestionsForBundleID:(id)a0 intentName:(id)a1 toolID:(id)a2 limit:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)suggestionMetadataForActions:(id)a0 withCompletion:(id /* block */)a1;

@end
