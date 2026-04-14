@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (id)init;
- (BOOL)isRoutingConfigurationLoaded;

@end
