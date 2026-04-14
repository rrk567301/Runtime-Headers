@class NSUUID, NSUserDefaults, NSObject;
@protocol OS_os_log, _CDLocalContext;

@interface PowerUITTEMonitor : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain) NSUUID *tteSessionID;
@property (nonatomic) long long _tteMonitorStatus;

- (void).cxx_destruct;
- (void)reset;
- (id)caculateInferredTTE;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1;
- (void)postAnalyticsEventAtEnd:(float)a0;
- (void)postAnalyticsEventAtPrediction;
- (void)postAnalyticsEventDurCorrection:(float)a0;
- (void)updateTTEMonitorSession:(id)a0;

@end
