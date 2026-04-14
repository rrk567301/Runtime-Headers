@interface VUIMetricsDiskManager : NSObject <VUIMetricsStorable> {
    void /* unknown type, empty encoding */ sessionDefaults;
    void /* unknown type, empty encoding */ eventDefaults;
}

@property (class, nonatomic, readonly) VUIMetricsDiskManager *sharedInstance;

- (void)clearAllData;
- (id)allSessions;
- (void).cxx_destruct;
- (id)init;
- (id)allEvents;
- (id)eventsForSession:(id)a0;
- (id)initWithSessionSuiteName:(id)a0 eventSuiteName:(id)a1;
- (id)sessionForEvent:(id)a0;
- (void)writeEvent:(id)a0;
- (void)writeSession:(id)a0;

@end
