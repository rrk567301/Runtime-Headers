@class NSString, NSDate;

@interface WiFiUsageRealTimeCoexSession : WiFiUsageSession

@property unsigned long long rtCoexType;
@property (retain) NSString *rtCoexSubType;
@property unsigned long long lastRequestType;
@property unsigned long long lastRequestPreferredChannel;
@property int lastRequestPreferredBand;
@property char lastRequestDifferentSSID;
@property (retain) NSString *lastRequestPreferredSSID;
@property (retain) NSString *lastRequestPreferredBSS;
@property char isSplitSSID;
@property char hasCandidates;
@property char hasDifferentIpv4DetailsAfterSSIDTransition;
@property char hasDifferentIpv6DetailsAfterSSIDTransition;
@property char isRtCoexOptimal;
@property (retain) NSDate *firstRtCoexOptimal;
@property (retain) NSDate *lastRtCoexOptimalStatusChange;
@property double rtCoexInOptimalDuration;
@property (retain) NSDate *lastEnterPreferredChannel;
@property double preferredChannelDuration;
@property (retain) NSDate *lastEnterPreferredBand;
@property double preferredBandDuration;
@property (retain) NSDate *firstSSIDTransition;
@property (retain) NSDate *firstIPUpdateAfterSSIDTransition;
@property (retain) NSDate *firstManualJoin;
@property (retain) NSDate *firstManualJoinAfterSSIDTransition;
@property unsigned long long requestSteerToPreferredChannelCount;
@property unsigned long long requestSteerCount;
@property unsigned long long requestDisconnectCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)metricName;
- (void)sessionDidStart;
- (void)updateAssociatedNetworkDetails:(id)a0;
- (id)eventDictionary:(char)a0;
- (id)eventDictionaryByBand:(int)a0 isFirst:(char)a1;
- (char)infraIsPartOfSplitSSID;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (char)isCurrentBandPreferredBand;
- (char)isCurrentChannelPreferredChannel;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)linkStateDidChange:(char)a0 isInvoluntary:(char)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)processIPv4Changes:(id)a0;
- (void)processIPv6Changes:(id)a0;
- (void)setPreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)setRealTimeCoexStatus:(char)a0 type:(unsigned long long)a1;
- (void)setRealtimeCoexStarted:(char)a0 type:(unsigned long long)a1 reasons:(id)a2;
- (void)setSteeringRequest:(unsigned long long)a0 preferredChannel:(unsigned long long)a1 preferredBand:(int)a2 preferredSSID:(id)a3 targetSSIDDiffersFromCurrent:(char)a4 preferredBSS:(id)a5 ssidIsSplit:(char)a6 transitionCandidates:(char)a7;
- (void)summarizeSession;
- (void)updatePreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)updateRtCoexInOptimalDuration:(char)a0;

@end
