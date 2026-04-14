@class NSMutableArray;

@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray *_loggedEvents;
}

+ (id)sharedInstance;
+ (void)resetEvents;
+ (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)resetEvents;
- (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
- (double)numberOfReceivedEvents;
- (BOOL)partialDictionaryMatches:(id)a0 eventDictionary:(id)a1;
- (void)sendEventWithMetricName:(id)a0 eventDictionary:(id)a1;

@end
