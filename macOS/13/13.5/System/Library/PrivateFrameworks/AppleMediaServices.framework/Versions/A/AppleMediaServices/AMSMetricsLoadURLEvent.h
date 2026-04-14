@class NSString, NSArray;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (copy) NSString *appleTimingApp;
@property BOOL apsRelayAttempted;
@property BOOL apsRelayDidFallback;
@property BOOL apsRelaySucceeded;
@property (retain) NSString *cellularDataBearerTechnology;
@property (copy) NSString *clientCorrelationKey;
@property (copy) NSString *clientError;
@property double connectionEndTime;
@property (copy) NSString *connectionInterface;
@property BOOL connectionReused;
@property unsigned long long connectionStartNStatRXBytes;
@property unsigned long long connectionStartNStatTXBytes;
@property unsigned long long connectionStopNStatRXBytes;
@property unsigned long long connectionStopNStatTXBytes;
@property double connectionStartTime;
@property (copy) NSString *connectionType;
@property double domainLookupEndTime;
@property double domainLookupStartTime;
@property (copy) NSString *DNSServers;
@property (copy) NSString *edgeNodeCacheStatus;
@property (copy) NSString *environmentDataCenter;
@property double fetchStartTime;
@property BOOL cachedResponse;
@property (copy) NSArray *networkQualityReports;
@property (copy) NSString *originalApp;
@property (copy) NSString *radioType;
@property (copy) NSString *radioTechnology;
@property unsigned long long redirectCount;
@property double redirectEndTime;
@property double redirectStartTime;
@property unsigned long long requestMessageSize;
@property double requestStartTime;
@property (copy) NSString *requestURL;
@property (copy) NSString *resolvedIPAddress;
@property (copy) NSString *responseDate;
@property double responseEndTime;
@property unsigned long long responseMessageSize;
@property unsigned long long responseMessageSizeUncompressed;
@property double responseStartTime;
@property double secureConnectionStartTime;
@property long long statusCode;
@property (copy) NSString *TIDState;
@property BOOL TFOEnabled;
@property BOOL TLSSessionTickets;
@property (copy) NSString *wt;
@property double xpSessionDuration;
@property BOOL xpSamplingForced;
@property double xpSamplingPercentageUsers;
@property double xpSamplingPercentageCachedResponses;
@property (copy) NSString *xxdc;

+ (BOOL)shouldCollectMetricsForContext:(id)a0;
+ (id)_DNSServerIPAddresses;
+ (id)_fetchNetworkQualityReports;
+ (id)_metricsDictionaryFromConfig:(id)a0;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_radioTypeStringValueFromRadioType:(int)a0;
+ (double)_randomDouble;
+ (id)_resolvedIPAddressFromTask:(id)a0;
+ (double)_timingDataMetricToServerTimeInterval:(id)a0;

- (id)initWithContext:(id)a0;
- (void)_prepareEventWithContext:(id)a0;

@end
