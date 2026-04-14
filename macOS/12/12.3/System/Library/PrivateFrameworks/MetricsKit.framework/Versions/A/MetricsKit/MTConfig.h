@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject

@property (retain) NSDictionary *debugSource;
@property (weak) id<MTConfigDelegate> delegate;
@property long long eventDataTimeout;

- (void).cxx_destruct;
- (id)sources;
- (id)configValueForKeyPath:(id)a0 sources:(id)a1;
- (id)computeWithConfigSources:(id /* block */)a0;
- (id)injectedSource;
- (BOOL)_isEventDataTimeoutUnset;
- (BOOL)disabledForSources:(id)a0;
- (id)blacklistedEventsForSources:(id)a0;
- (id)blacklistedFieldsForSources:(id)a0;
- (id)deResFieldsForSources:(id)a0;
- (BOOL)metricsDisabledOrBlacklistedEvent:(id)a0 sources:(id)a1;
- (void)removeBlacklistedFields:(id)a0 sources:(id)a1;
- (void)applyDeRes:(id)a0 sources:(id)a1;
- (id)configValueForKeyPath:(id)a0 default:(id)a1;

@end
