@class NSMutableDictionary;

@interface _LTDAssetAnalytics : NSObject {
    NSMutableDictionary *_localeAnalyticsMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) _LTDAssetAnalytics *shared;

- (id)_init;
- (void).cxx_destruct;
- (id)analyticsDataForLocaleIdentifier:(id)a0 completionTime:(double)a1 connectionType:(unsigned long long)a2 downloadOutcome:(unsigned long long)a3 downloadTriggerSource:(unsigned long long)a4 hasClientReportedError:(BOOL)a5;
- (id)createEventWithNSLocale:(id)a0 connectionType:(unsigned long long)a1 downloadTriggerSource:(unsigned long long)a2;
- (id)getEventWithNSLocale:(id)a0;
- (void)markEventsAsRetriedForLocales:(id)a0;
- (void)sendEventToAnalytics:(id)a0;
- (void)sendEventsToAnalytics:(id)a0;

@end
