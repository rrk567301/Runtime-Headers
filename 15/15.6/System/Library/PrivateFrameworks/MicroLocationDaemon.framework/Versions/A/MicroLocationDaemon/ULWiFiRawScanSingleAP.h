@class NSString, ULWiFiScanChannel, NSDate;

@interface ULWiFiRawScanSingleAP : NSObject

@property (retain, nonatomic) NSString *SSID;
@property (retain, nonatomic) NSString *BSSID;
@property (retain, nonatomic) ULWiFiScanChannel *channel;
@property (retain, nonatomic) NSDate *scanTimestamp;
@property (nonatomic) long long RSSI;
@property (nonatomic) char isRssiInvalid;
@property (nonatomic) char isRssiOffChannel;
@property (nonatomic) char isPersonalHotSpot;

- (id)description;
- (void).cxx_destruct;

@end
