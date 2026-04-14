@class NSString, NSMutableDictionary;

@interface FPDCoreAnalyticsReport : NSObject {
    NSString *_eventName;
    BOOL _isEventEnabled;
    NSMutableDictionary *_report;
}

- (id)initWithEventName:(id)a0;
- (void)addValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)sendReport;

@end
