@class NSString, NSMutableString, SDRDiagnosticReporter, NSMutableArray, NSNumber;

@interface WiFiSoftError : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long enabled;
@property (nonatomic) long long metricsEnabled;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSMutableArray *occurrenceTimestamps;
@property (retain, nonatomic) NSNumber *lastTimestamp;
@property (retain, nonatomic) NSMutableString *logMessage;
@property (retain, nonatomic) NSString *metricEventName;
@property (retain, nonatomic) SDRDiagnosticReporter *abcReporter;
@property (retain, nonatomic) NSMutableArray *abcSubmissionTimestamps;
@property (retain, nonatomic) NSMutableArray *simulateCrashTimestamps;
@property (retain, nonatomic) NSMutableArray *hudTimestamps;
@property (retain, nonatomic) NSMutableArray *askToLaunchTapToRadarTimestamps;
@property (retain, nonatomic) NSMutableArray *tapToRadarTimestamps;
@property (readonly, nonatomic) long long maxOccurrences;
@property (readonly, nonatomic) long long metricSubmissionSamplingRate;
@property (readonly, nonatomic) long long maxNonUIActions;
@property (readonly, nonatomic) long long intervalForMaxNonUIActions;
@property (readonly, nonatomic) long long maxUIActions;
@property (readonly, nonatomic) long long intervalForMaxUIActions;
@property (readonly, nonatomic) long long maxLogMessageLength;

+ (void)_cloudAssetsFetchHandler:(id)a0;
+ (void)_submitSummaryReportMetric;
+ (void)_updateHUDWithMessage:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)count;
- (id)initWithName:(id)a0;
- (id)incrementCount;
- (void)resetCount;
- (id)submitMetric;
- (void)clearLogMessage;
- (void)writeLogMessage;
- (void)_addConfigurationData:(id)a0;
- (void)_addGenericMetricData:(id)a0;
- (long long)_countOf:(id)a0 withinInterval:(double)a1;
- (char)_maxNonUIActionsReachedFor:(id)a0;
- (char)_maxUIActionsReachedFor:(id)a0;
- (void)_recordCurrentTimestampIn:(id)a0;
- (void)_resetCount;
- (id)appendLogMessage:(id)a0 includeTimestamp:(char)a1;
- (char)askToLaunchTapToRadarWithMessage:(id)a0;
- (char)askToLaunchTapToRadarWithMessage:(id)a0 completionHandler:(id /* block */)a1;
- (char)askToLaunchTapToRadarWithMessage:(id)a0 timeout:(double)a1;
- (char)askToLaunchTapToRadarWithMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithName:(id)a0 andParams:(id)a1;
- (long long)recentCountWithinTimeInterval:(double)a0;
- (id)submitABCReportWithReason:(id)a0;
- (id)submitABCReportWithReason:(id)a0 event:(id)a1;
- (id)submitMetricWithData:(id)a0;
- (id)tapToRadarWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)updateHUDWithMessage:(id)a0;

@end
