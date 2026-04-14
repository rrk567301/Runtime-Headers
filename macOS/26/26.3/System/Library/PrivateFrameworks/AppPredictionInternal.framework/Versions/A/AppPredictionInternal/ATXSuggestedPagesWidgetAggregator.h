@class NSArray;

@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray *_sources;
}

- (id)init;
- (void).cxx_destruct;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)initWithSources:(id)a0;

@end
