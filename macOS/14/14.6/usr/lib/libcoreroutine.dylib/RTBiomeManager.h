@class RTDefaultsManager, RTPlatform;

@interface RTBiomeManager : RTService

@property (readonly, copy, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, copy, nonatomic) RTPlatform *platform;

+ (id)biomeStreamTypeToBiomeStream:(long long)a0;
+ (id)streamTypeToString:(long long)a0;

- (void).cxx_destruct;
- (void)_setup;
- (long long)_compareEvent1:(id)a0 event2:(id)a1 streamType:(long long)a2;
- (id)_extractDateIntervalFromBiomeEvent1:(id)a0 event2:(id)a1 streamType:(long long)a2;
- (BOOL)_isValidEvent:(id)a0 streamType:(long long)a1;
- (void)enumerateEventsWithinDateInterval:(id)a0 streamType:(long long)a1 handler:(id /* block */)a2;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1;

@end
