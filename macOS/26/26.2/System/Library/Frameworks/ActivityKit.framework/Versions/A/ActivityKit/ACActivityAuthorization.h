@class _TtC11ActivityKit21ActivityAuthorization;

@interface ACActivityAuthorization : NSObject

@property (retain, nonatomic) _TtC11ActivityKit21ActivityAuthorization *activityAuthorization;

- (void).cxx_destruct;
- (id)init;
- (BOOL)areActivitiesEnabledForBundleId:(id)a0;
- (BOOL)areFrequentPushesEnabledForBundleId:(id)a0;
- (void)setActivitiesEnabled:(BOOL)a0 forBundleId:(id)a1;
- (void)setActivitiesEnabled:(BOOL)a0 forBundleId:(id)a1 source:(long long)a2;
- (void)setFrequentPushesEnabled:(BOOL)a0 forBundleId:(id)a1;

@end
