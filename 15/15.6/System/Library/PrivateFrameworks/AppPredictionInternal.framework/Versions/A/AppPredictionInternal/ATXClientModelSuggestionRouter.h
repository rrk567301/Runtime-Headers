@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (void).cxx_destruct;
- (char)isRoutingConfigurationLoaded;
- (char)shouldPersistCacheForClientModel:(id)a0;
- (char)shouldRouteClientToInfoSuggestionEngine:(id)a0;

@end
