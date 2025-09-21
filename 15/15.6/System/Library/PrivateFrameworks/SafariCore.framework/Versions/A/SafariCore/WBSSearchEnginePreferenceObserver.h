@class NSString;
@protocol WBSSearchEnginePreferenceObserverDelegate, WBSSearchProviderContext;

@interface WBSSearchEnginePreferenceObserver : NSObject {
    id<WBSSearchProviderContext> _searchProviderContext;
}

@property (class, readonly, nonatomic) WBSSearchEnginePreferenceObserver *sharedObserver;

@property (weak, nonatomic) id<WBSSearchEnginePreferenceObserverDelegate> delegate;
@property (readonly, nonatomic) char duckDuckGoDefaultSearchEngine;
@property (readonly, nonatomic) char isABTestingEnabled;
@property (readonly, nonatomic) char defaultSearchEngineMatchesExperiment;
@property (readonly, nonatomic) char googleIsDefaultSearchEngine;
@property (readonly, nonatomic) char isGoogleEnabledSearchEngine;
@property (readonly, copy, nonatomic) NSString *defaultSearchEngineShortName;

+ (void)setUpSharedObserverWithSearchProviderContext:(id)a0;

- (void).cxx_destruct;
- (void)_suppressSearchSuggestionsSettingDidChange:(id)a0;
- (void)_updateSearchEnginePreference:(id)a0;
- (id)initWithSearchProviderContext:(id)a0;

@end
