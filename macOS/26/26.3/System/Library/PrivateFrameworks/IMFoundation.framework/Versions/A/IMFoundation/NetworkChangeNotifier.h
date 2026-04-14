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

- (void)systemDidWake;
- (void)systemWillSleep;
- (int)linkQualityValueForInterfaceType:(unsigned long long)a0;
- (id)primaryInterfaceName;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)a0;
- (void)dealloc;
- (int)linkQualityValueForInterface:(id)a0;
- (BOOL)isPrimaryCellular;
- (void)_clearIPCache;
- (void)connectionMonitorDidUpdate:(id)a0;
- (BOOL)_listenForChanges;

@end
