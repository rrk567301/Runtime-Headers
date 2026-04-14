@class NSArray, WBSSearchProvider;

@interface WBSSearchImpressionAnalyticsRecorder : NSObject

@property (class, readonly, nonatomic) WBSSearchImpressionAnalyticsRecorder *sharedRecorder;

@property (copy, nonatomic) NSArray *searchProviders;
@property (retain, nonatomic) WBSSearchProvider *defaultSearchProvider;

- (void).cxx_destruct;
- (id)init;
- (void)didActualizeImpressionForURL:(id)a0 provenance:(long long)a1;
- (id)searchProviderForURL:(id)a0;

@end
