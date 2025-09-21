@class NSString, NSMutableSet, NSDate;

@interface WiFiUsageSoftApSession : WiFiUsageSession

@property (retain, nonatomic) NSString *requester;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSString *tearDownReason;
@property (retain, nonatomic) NSDate *lastAwdlActiveTime;
@property (retain, nonatomic) NSDate *lastInfraActiveTime;
@property (nonatomic) char compatibilityEnabled;
@property (nonatomic) unsigned long long appleClientConnectCount;
@property (nonatomic) unsigned long long otherClientConnectCount;
@property (nonatomic) unsigned long long hiddenClientConnectCount;
@property (nonatomic) unsigned long long broadcastClientConnectCount;
@property (nonatomic) unsigned long long twoFourGHzClientConnectCount;
@property (nonatomic) unsigned long long fiveGHzClientConnectCount;
@property (nonatomic) unsigned long long autoHotspotClientConnectCount;
@property (nonatomic) unsigned long long instantHotspotClientConnectCount;
@property (nonatomic) unsigned long long clientDisconnectCount;
@property (nonatomic) unsigned long long maxConnectedClientCount;
@property (nonatomic) char lastHiddenState;
@property (nonatomic) unsigned long long lastChannel;
@property (nonatomic) unsigned long long twoFourGHzChannelCount;
@property (nonatomic) unsigned long long fiveGHzChannelCount;
@property (nonatomic) double lowPowerModeDuration;
@property (nonatomic) double infraActiveDuration;
@property (nonatomic) double awdlActiveDuration;
@property (nonatomic) double requestToUpLatency;
@property (nonatomic) unsigned long long infraStateChangedCount;
@property (nonatomic) unsigned long long awdlStateChangedCount;
@property (nonatomic) unsigned long long knownNetworkScanCount;
@property (nonatomic) unsigned long long hiddenTransitionCount;
@property (nonatomic) unsigned long long bandTransitionCount;
@property (nonatomic) unsigned long long twoFourGHzDeniedChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii1ChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii2aChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii2cChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii3ChannelCount;
@property (nonatomic) unsigned long long appliedCountryCode;
@property (retain, nonatomic) NSMutableSet *connectedClients;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)metricName;
- (void)addSoftApClientEvent:(char)a0 identifier:(id)a1 isAppleClient:(char)a2 isInstantHotspot:(char)a3 isAutoHotspot:(char)a4 isHidden:(char)a5;
- (void)addSoftApCoexEvent:(unsigned long long)a0 deniedUnii1ChannelMap:(unsigned long long)a1 deniedUnii2aChannelMap:(unsigned long long)a2 deniedUnii2cChannelMap:(unsigned long long)a3 deniedUnii3ChannelMap:(unsigned long long)a4;
- (void)awdlStateDidChange:(char)a0 inMode:(long long)a1;
- (id)eventDictionary:(char)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)linkQualityDidChange:(id)a0;
- (void)linkStateDidChange:(char)a0 isInvoluntary:(char)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)softApStateDidChange:(char)a0 requester:(id)a1 status:(id)a2 changeReason:(id)a3 channelNumber:(unsigned long long)a4 countryCode:(unsigned long long)a5 isHidden:(char)a6 isInfraConnected:(char)a7 isAwdlUp:(char)a8 lowPowerModeDuration:(double)a9 compatibilityMode:(char)a10 requestToUpLatency:(double)a11;
- (void)summarizeSession;

@end
