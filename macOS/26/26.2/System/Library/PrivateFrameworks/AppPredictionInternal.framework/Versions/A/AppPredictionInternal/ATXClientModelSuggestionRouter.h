@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (BOOL)isRoutingConfigurationLoaded;
- (void).cxx_destruct;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (id)init;

@end
