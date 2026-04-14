@class NSDate, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface MobileAssetHealthReport : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistedStateDispatchQueue;
@property (retain, nonatomic) NSDate *dateOfFirstRunInCurrentOS;
@property (retain, nonatomic) SUCorePersistedState *state;
@property (nonatomic) BOOL firstTimeInNewOS;

+ (id)sharedInstance;
+ (id)bucketedDays:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)setLastReportDate:(id)a0;
- (void)_collectAndSubmitReportWithReports:(id)a0;
- (void)_submitReportToCoreAnalytics:(id)a0 commonFields:(id)a1 sessionId:(id)a2;
- (void)_submitReportToSplunk:(id)a0 commonFields:(id)a1 sessionId:(id)a2;
- (id)appleIntelligenceRelatedSetIdentifiers;
- (id)getGreymatterStatus;
- (id)getHealthReports;
- (id)getLastReportDate;
- (id)getPreviousOTAStatus;
- (id)getSystemInformation;
- (void)scheduleReportWithReports:(id)a0;

@end
