@class NSString;

@interface CWFRemoteInterfaceNetworkInfo : NSObject

@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) long long RSSI;
@property (copy, nonatomic) NSString *BSSID;
@property (nonatomic) unsigned long long securityType;
@property (nonatomic) int state;
@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *networkName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithInterface:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSSID:(id)a0;
- (id)initWithScanResult:(id)a0;

@end
