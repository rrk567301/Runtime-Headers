@class NSString, NSDate;

@interface WiFiUsageRealTimeCoexSession : WiFiUsageSession

@property unsigned long long rtCoexType;
@property (retain) NSString *rtCoexSubType;
@property unsigned long long lastRequestType;
@property unsigned long long lastRequestPreferredChannel;
@property int lastRequestPreferredBand;
@property BOOL lastRequestDifferentSSID;
@property (retain) NSString *lastRequestPreferredSSID;
@property (retain) NSString *lastRequestPreferredBSS;
@property BOOL isSplitSSID;
@property BOOL hasCandidates;
@property BOOL isRtCoexOptimal;
@property (retain) NSDate *firstRtCoexOptimal;
@property (retain) NSDate *lastRtCoexOptimalStatusChange;
@property double rtCoexSuboptimalDuration;
@property unsigned long long requestSteerToPreferredChannelCount;
@property unsigned long long requestSteerCount;
@property unsigned long long requestDisconnectCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)summarizeSession;
- (id)eventDictionary:(BOOL)a0;
- (void)setSteeringRequest:(unsigned long long)a0 preferredChannel:(unsigned long long)a1 preferredBand:(int)a2 preferredSSID:(id)a3 targetSSIDDiffersFromCurrent:(BOOL)a4 preferredBSS:(id)a5 ssidIsSplit:(BOOL)a6 transitionCandidates:(BOOL)a7;
- (void)sessionDidStartWithCompatibilityMode:(BOOL)a0;
- (id)eventDictionaryByBand:(int)a0 isFirst:(BOOL)a1;
- (void)setRealtimeCoexStarted:(BOOL)a0 type:(unsigned long long)a1 reasons:(id)a2;
- (void)setRealTimeCoexStatus:(BOOL)a0;

@end
