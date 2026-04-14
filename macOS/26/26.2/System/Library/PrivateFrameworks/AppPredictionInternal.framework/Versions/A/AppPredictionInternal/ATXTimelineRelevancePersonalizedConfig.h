@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (void).cxx_destruct;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;
- (id)init;
- (id)_readPersonalizedConfiguration;
- (id)initWithPersonalizedConfiguration:(id)a0;

@end
