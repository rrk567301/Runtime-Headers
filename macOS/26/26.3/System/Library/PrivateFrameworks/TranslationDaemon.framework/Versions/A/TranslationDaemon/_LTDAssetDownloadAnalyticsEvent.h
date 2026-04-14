@class NSString;

@interface _LTDAssetDownloadAnalyticsEvent : NSObject {
    double _startTime;
}

@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) double completionTime;
@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) unsigned long long downloadOutcome;
@property (nonatomic) unsigned long long downloadTriggerSource;
@property (nonatomic) BOOL hasClientReportedError;
@property (nonatomic) BOOL didRetry;

- (void).cxx_destruct;
- (void)startTimer;
- (void)_timeoutEvent;
- (id)initWithNSLocale:(id)a0 connectionType:(unsigned long long)a1 downloadTriggerSource:(unsigned long long)a2;
- (void)stopTimerWithOutcome:(unsigned long long)a0 hasClientReportedError:(BOOL)a1 localeIdentifier:(id)a2;

@end
