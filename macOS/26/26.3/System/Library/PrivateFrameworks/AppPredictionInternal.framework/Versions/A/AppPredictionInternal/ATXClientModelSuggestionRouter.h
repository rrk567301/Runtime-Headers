@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (BOOL)isRoutingConfigurationLoaded;

@end
