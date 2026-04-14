@class CBIndicatorBrightnessModule, NSString, NSDictionary, CBHistogramBuilder3D, NSObject;
@protocol OS_dispatch_source;

@interface CBIndicatorAnalyticsModule : CBModule <CBContainerModuleProtocol> {
    CBHistogramBuilder3D *_stats;
    CBIndicatorBrightnessModule *_indicatorModule;
    NSObject<OS_dispatch_source> *_timer;
    NSDictionary *_ddFactorEdgeMapping;
    NSDictionary *_luxEdgeMapping;
    NSDictionary *_nitsEdgeMapping;
    BOOL _timerIsSuspended;
    double _timerIntervalMs;
    float _sessionStart;
    float _lastSessionDuration;
    float _trustedLux;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)stopTimer;
- (void)submit;
- (void)start;
- (void)startTimer;
- (void)dealloc;
- (void)indicatorStatsTimerCallback;
- (id)initWithQueue:(id)a0 andIndicatorModule:(id)a1;
- (id)initWithQueue:(id)a0 andIndicatorModule:(id)a1 andDDFactorMapping:(id)a2 andLuxMapping:(id)a3 andNitsMapping:(id)a4 andDDFactorEdges:(id)a5 andLuxEdges:(id)a6 andNitsEdges:(id)a7 andTimerIntervalMs:(double)a8;

@end
