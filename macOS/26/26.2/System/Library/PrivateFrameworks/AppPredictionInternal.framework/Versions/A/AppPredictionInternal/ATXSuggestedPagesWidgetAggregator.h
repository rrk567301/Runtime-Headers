@class NSArray;

@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray *_sources;
}

- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (id)init;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end
