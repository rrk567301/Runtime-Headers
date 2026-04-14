@interface WBSSearchEnginePreferenceObserver : NSObject

@property (class, readonly, nonatomic) WBSSearchEnginePreferenceObserver *sharedObserver;

@property (readonly, nonatomic) BOOL duckDuckGoDefaultSearchEngine;
@property (readonly, nonatomic) BOOL isABTestingEnabled;

- (id)init;
- (void)_updateSearchEnginePreference:(id)a0;

@end
