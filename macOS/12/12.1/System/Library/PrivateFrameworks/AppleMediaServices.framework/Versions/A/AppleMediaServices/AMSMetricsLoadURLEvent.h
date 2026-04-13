@class NSString, NSArray;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (retain) NSString *appleTimingApp;
@property BOOL apsRelayAttempted;
@property BOOL apsRelayDidFallback;
@property BOOL apsRelaySucceeded;
@property (retain) NSString *cellularDataBearerTechnology;
@property (retain) NSString *clientCorrelationKey;
@property (retain) NSString *clientError;
@property double connectionEndTime;
@property (retain) NSString *connectionInterface;
@property BOOL connectionReused;
@property unsigned long long connectionStartNStatRXBytes;
@property unsigned long long connectionStartNStatTXBytes;
@property unsigned long long connectionStopNStatRXBytes;
@property unsigned long long connectionStopNStatTXBytes;
@property double connectionStartTime;
@property (retain) NSString *connectionType;
@property double domainLookupEndTime;
@property double domainLookupStartTime;
@property (retain) NSString *DNSServers;
@property (retain) NSString *edgeNodeCacheStatus;
@property (retain) NSString *environmentDataCenter;
@property double fetchStartTime;
@property BOOL cachedResponse;
@property (retain) NSArray *networkQualityReports;
@property (retain) NSString *originalApp;
@property (retain) NSString *radioType;
@property (retain) NSString *radioTechnology;
@property unsigned long long redirectCount;
@property double redirectEndTime;
@property double redirectStartTime;
@property unsigned long long requestMessageSize;
@property double requestStartTime;
@property (retain) NSString *requestURL;
@property (retain) NSString *resolvedIPAddress;
@property (retain) NSString *responseDate;
@property double responseEndTime;
@property unsigned long long responseMessageSize;
@property double responseStartTime;
@property double secureConnectionStartTime;
@property long long statusCode;
@property (retain) NSString *TIDState;
@property BOOL TFOEnabled;
@property BOOL TLSSessionTickets;
@property (retain) NSString *wt;
@property double xpSessionDuration;
@property BOOL xpSamplingForced;
@property double xpSamplingPercentageUsers;
@property double xpSamplingPercentageCachedResponses;
@property (retain) NSString *xxdc;

+ (id)_radioTypeStringValueFromRadioType:(int)a0;
+ (double)_timingDataMetricToServerTimeInterval:(id)a0;
+ (id)_DNSServerIPAddresses;
+ (id)_fetchNetworkQualityReports;
+ (id)_resolvedIPAddressFromTask:(id)a0;
+ (id)_metricsDictionaryFromConfig:(id)a0;
+ (double)_randomDouble;
+ (BOOL)shouldCollectMetricsForContext:(id)a0;

- (id)initWithContext:(id)a0;
- (void)_prepareEventWithContext:(id)a0;

@end
