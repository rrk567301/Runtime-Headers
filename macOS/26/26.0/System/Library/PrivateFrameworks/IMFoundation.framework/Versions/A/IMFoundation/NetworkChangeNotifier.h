@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>

@property (nonatomic) struct __SCDynamicStore { } *store;
@property (nonatomic) BOOL lastPostedNetworkUp;
@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor;
@property (retain, nonatomic) NSString *myIP;
@property (retain, nonatomic) NSArray *myIPs;
@property (readonly, nonatomic) BOOL isNetworkUp;
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (readonly, nonatomic) struct __SCDynamicStore { } *getDynamicStore;

+ (id)sharedInstance;
+ (void)disableNotifications;
+ (BOOL)enableNotifications;

- (void)systemWillSleep;
- (BOOL)isPrimaryCellular;
- (void)_clearIPCache;
- (void)dealloc;
- (id)primaryInterfaceName;
- (void)systemDidWake;
- (id)init;
- (int)linkQualityValueForInterfaceType:(unsigned long long)a0;
- (BOOL)_listenForChanges;
- (void)connectionMonitorDidUpdate:(id)a0;
- (int)linkQualityValueForInterface:(id)a0;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
