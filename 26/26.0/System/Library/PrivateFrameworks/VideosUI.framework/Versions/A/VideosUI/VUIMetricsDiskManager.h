@interface VUIMetricsDiskManager : NSObject <VUIMetricsStorable> {
    void /* unknown type, empty encoding */ sessionDefaults;
    void /* unknown type, empty encoding */ eventDefaults;
}

@property (class, nonatomic, readonly) VUIMetricsDiskManager *sharedInstance;

- (id)allSessions;
- (void)clearAllData;
- (id)init;
- (id)allEvents;
- (void).cxx_destruct;
- (id)eventsForSession:(id)a0;
- (id)initWithSessionSuiteName:(id)a0 eventSuiteName:(id)a1;
- (id)sessionForEvent:(id)a0;
- (void)writeEvent:(id)a0;
- (void)writeSession:(id)a0;

@end
