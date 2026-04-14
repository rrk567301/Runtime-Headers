@class NSString, NSData, HMFWiFiManager;

@interface HMDCharacteristicReadWriteNetworkInformation : NSObject

@property (copy) NSString *cachedWifiSSID;
@property (copy) NSString *cachedWifiBSSID;
@property (copy) NSData *cachedIpv4Signature;
@property (copy) NSData *cachedIpv6Signature;
@property unsigned long long cachedWifiConnectionState;
@property long long cachedBluetoothState;
@property unsigned long long cachedEthernetConnectionState;
@property unsigned long long cachedCellularDataConnectionState;
@property BOOL cachedIsConnectedToInternet;
@property double timeIntervalNetworkInformationCache;
@property (retain) HMFWiFiManager *wifiManager;

- (void).cxx_destruct;
- (id)initWithWifiManager:(id)a0;
- (void)_refreshBluetoothInformation;
- (void)_refreshWifiInformation;
- (void)refreshNetworkInformation;

@end
