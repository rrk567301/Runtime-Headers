@class NSString;

@interface MIBUNetworkInfo : NSObject

@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *BSSID;
@property (nonatomic) long long RSSI;
@property (nonatomic) long long noise;
@property (nonatomic) long long channel;
@property (nonatomic) unsigned long long channelWidth;
@property (nonatomic) unsigned long long channelBand;
@property (nonatomic) unsigned long long PHYMode;
@property (nonatomic) unsigned long long numberOfSpatialStreams;
@property (nonatomic) unsigned long long MCSIndex;
@property (retain, nonatomic) NSString *MACAddress;
@property (retain, nonatomic) NSString *iPV4Address;
@property (retain, nonatomic) NSString *iPV6Address;

+ (id)queryNetworkInfo;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
