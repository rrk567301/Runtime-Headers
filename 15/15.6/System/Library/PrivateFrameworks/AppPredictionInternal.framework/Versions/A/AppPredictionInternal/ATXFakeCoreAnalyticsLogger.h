@class NSMutableArray;

@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray *_loggedEvents;
}

+ (id)sharedInstance;
+ (char)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
+ (void)resetEvents;

- (id)init;
- (void).cxx_destruct;
- (char)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
- (double)numberOfReceivedEvents;
- (char)partialDictionaryMatches:(id)a0 eventDictionary:(id)a1;
- (void)resetEvents;
- (void)sendEventWithMetricName:(id)a0 eventDictionary:(id)a1;

@end
