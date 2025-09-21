@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>

@property (nonatomic) struct __SCDynamicStore { } *store;
@property (nonatomic) char lastPostedNetworkUp;
@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor;
@property (retain, nonatomic) NSString *myIP;
@property (retain, nonatomic) NSArray *myIPs;
@property (readonly, nonatomic) char isNetworkUp;
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (readonly, nonatomic) struct __SCDynamicStore { } *getDynamicStore;

+ (id)sharedInstance;
+ (char)enableNotifications;
+ (void)disableNotifications;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)systemWillSleep;
- (void)_clearIPCache;
- (char)_listenForChanges;
- (void)connectionMonitorDidUpdate:(id)a0;
- (char)isPrimaryCellular;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)a0;
- (int)linkQualityValueForInterface:(id)a0;
- (int)linkQualityValueForInterfaceType:(unsigned long long)a0;
- (id)primaryInterfaceName;
- (void)systemDidWake;

@end
