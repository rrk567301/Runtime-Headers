@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject

@property (retain) NSDictionary *debugSource;
@property (weak) id<MTConfigDelegate> delegate;
@property long long eventDataTimeout;

- (void).cxx_destruct;
- (id)sources;
- (id)configValueForKeyPath:(id)a0 sources:(id)a1;
- (id)injectedSource;
- (BOOL)_isEventDataTimeoutUnset;
- (BOOL)disabledForSources:(id)a0;
- (id)denylistedEventsForSources:(id)a0;
- (id)denylistedFieldsForSources:(id)a0;
- (id)deResFieldsForSources:(id)a0;
- (BOOL)metricsDisabledOrDenylistedEvent:(id)a0 sources:(id)a1;
- (void)removeDenylistedFields:(id)a0 sources:(id)a1;
- (void)applyDeRes:(id)a0 sources:(id)a1;
- (id)computeWithConfigSources:(id /* block */)a0;
- (id)configValueForKeyPath:(id)a0 default:(id)a1;
- (BOOL)metricsDisabledOrBlacklistedEvent:(id)a0 sources:(id)a1;
- (void)removeBlacklistedFields:(id)a0 sources:(id)a1;
- (id)blacklistedEventsForSources:(id)a0;
- (id)blacklistedFieldsForSources:(id)a0;

@end
