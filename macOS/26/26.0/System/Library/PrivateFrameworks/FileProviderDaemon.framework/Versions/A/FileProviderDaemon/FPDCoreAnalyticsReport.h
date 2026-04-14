@class NSString, NSMutableDictionary;

@interface FPDCoreAnalyticsReport : NSObject {
    NSString *_eventName;
    BOOL _isEventEnabled;
    NSMutableDictionary *_report;
}

- (void)addValue:(id)a0 forKey:(id)a1;
- (id)initWithEventName:(id)a0;
- (void).cxx_destruct;
- (void)sendReport;

@end
