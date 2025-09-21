@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject

@property (retain) NSDictionary *debugSource;
@property (weak) id<MTConfigDelegate> delegate;
@property long long eventDataTimeout;

- (void).cxx_destruct;
- (id)sources;
- (void)removeDenylistedFields:(id)a0 sources:(id)a1;
- (char)_isEventDataTimeoutUnset;
- (void)applyDeRes:(id)a0 sources:(id)a1;
- (id)blacklistedEventsForSources:(id)a0;
- (id)blacklistedFieldsForSources:(id)a0;
- (id)computeWithConfigSources:(id /* block */)a0;
- (id)configValueForKeyPath:(id)a0 default:(id)a1;
- (id)configValueForKeyPath:(id)a0 sources:(id)a1;
- (id)deResFieldsForSources:(id)a0;
- (id)denylistedEventsForSources:(id)a0;
- (id)denylistedFieldsForSources:(id)a0;
- (char)disabledForSources:(id)a0;
- (id)injectedSource;
- (char)metricsDisabledOrBlacklistedEvent:(id)a0 sources:(id)a1;
- (char)metricsDisabledOrDenylistedEvent:(id)a0 sources:(id)a1;
- (void)removeBlacklistedFields:(id)a0 sources:(id)a1;

@end
