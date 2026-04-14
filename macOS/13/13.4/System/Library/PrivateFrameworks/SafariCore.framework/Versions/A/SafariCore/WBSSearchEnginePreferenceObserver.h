@protocol WBSSearchEnginePreferenceObserverDelegate;

@interface WBSSearchEnginePreferenceObserver : NSObject

@property (class, readonly, nonatomic) WBSSearchEnginePreferenceObserver *sharedObserver;

@property (weak, nonatomic) id<WBSSearchEnginePreferenceObserverDelegate> delegate;
@property (readonly, nonatomic) BOOL duckDuckGoDefaultSearchEngine;
@property (readonly, nonatomic) BOOL googleIsDefaultSearchEngine;
@property (readonly, nonatomic) BOOL isABTestingEnabled;
@property (readonly, nonatomic) BOOL defaultSearchEngineMatchesExperiment;

- (id)init;
- (void).cxx_destruct;
- (void)_updateSearchEnginePreference:(id)a0;

@end
