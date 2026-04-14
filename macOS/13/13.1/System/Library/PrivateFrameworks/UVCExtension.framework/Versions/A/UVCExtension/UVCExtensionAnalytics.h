@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UVCExtensionAnalytics : NSObject {
    NSMutableDictionary *_analyticsEvents;
    BOOL _isActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_updatedAnalyticsEvents;
    NSObject<OS_dispatch_source> *_logTimer;
    NSSet *_logOnceValidEvents;
}

@property (readonly) NSArray *events;
@property (readonly) NSDictionary *attributes;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)activate;
- (id)initWithAttributes:(id)a0;
- (void)addEvent:(id)a0;
- (BOOL)setupLoggingTimer;
- (void)reportAnalyticsForName:(id)a0 data:(id)a1;
- (void)reportAnalytics:(id)a0;
- (void)updateAnalyticsForEvent:(id)a0;
- (void)logAnalyticsForUpdatedEvents;
- (void)logAnalyticsForEventName:(id)a0 value:(id)a1;

@end
