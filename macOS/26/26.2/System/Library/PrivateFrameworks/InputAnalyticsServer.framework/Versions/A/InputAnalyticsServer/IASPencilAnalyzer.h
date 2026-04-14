@class NSMutableDictionary, IASPencilAnalyzerDataStore;

@interface IASPencilAnalyzer : IASAnalyzer {
    struct __IOHIDManager { } *_stylusHidManager;
}

@property (nonatomic) unsigned long long pencilVersion;
@property (retain, nonatomic) NSMutableDictionary *lastTouchBegan;
@property (retain, nonatomic) NSMutableDictionary *lastHoverBegan;
@property (retain, nonatomic) NSMutableDictionary *lastSqueezeBegan;
@property (retain, nonatomic) NSMutableDictionary *beginTimestamps;
@property (retain, nonatomic) NSMutableDictionary *endTimestamps;
@property (retain, nonatomic) IASPencilAnalyzerDataStore *dataStore;

+ (void)periodic24HourEvents;

- (void).cxx_destruct;
- (void)dealloc;
- (void)consumeAction:(id)a0;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (void)periodic24HourEvents;
- (void)handleAnyActivityWithEndSignal:(id)a0;
- (void)addTimestamp:(id)a0 toDictionary:(id)a1 forBundleId:(id)a2;
- (id)allErrorData;
- (id)allUsageData;
- (id)bundleIdCategoryForBundleId:(id)a0;
- (id)dateStringFromTimestamp:(id)a0;
- (void)deregisterHIDManager;
- (long long)findTimeIncrementFrom:(id)a0 until:(id)a1 lastEnded:(id)a2 type:(unsigned long long)a3;
- (void)handleBeginSignal:(id)a0;
- (void)handleEndSignal:(id)a0;
- (void)handleSettingsEvent;
- (void)handleSignal:(id)a0;
- (void)handleUsageEvent;
- (void)handleUsageEventFromDate:(id)a0;
- (id)lastEndTimeForSignal:(id)a0;
- (id)lastEndTimeForUsageType:(unsigned long long)a0 forBundleId:(id)a1 forDate:(id)a2;
- (void)logAnalyzerError:(id)a0 forDate:(id)a1;
- (void)maybePublishFields:(id)a0 ToCoreAnalyticsEvent:(id)a1;
- (void)registerHIDManager;
- (void)removeDateStoreRowsBefore:(id)a0;
- (void)updateDataStoreForBundleId:(id)a0 beginTime:(id)a1 endTime:(id)a2 lastEndTime:(id)a3 usageType:(unsigned long long)a4;
- (void)updateDataStoreForSignal:(id)a0 beginTime:(id)a1 lastEndTime:(id)a2;
- (unsigned long long)usageTypeFromSignalName:(id)a0;

@end
