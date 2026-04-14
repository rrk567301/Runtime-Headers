@class NSString, AWDLServiceDiscoveryManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMNWirelessController : NSObject

@property BOOL hostingAP;
@property BOOL connectedToAP;
@property (retain) NSString *accessPointSSID;
@property (retain) NSString *accessPointPassword;
@property (retain) NSString *currentWirelessSSID;
@property (retain) NSString *currentWirelessBSSID;
@property (retain) NSString *previousWirelessConfigurationUUID;
@property (retain) NSMutableArray *delegates;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property struct __IPConfigurationService { } *ipConfigService;
@property (retain) AWDLServiceDiscoveryManager *awdlTrafficRegistrationManager;
@property BOOL attemptingWirelessSwitch;

+ (id)sharedController;
+ (id)wirelessErrorWithCode:(unsigned long long)a0;
+ (id)stringForSecurityType:(unsigned long long)a0;
+ (id)stringForOPMode:(long long)a0;
+ (id)stringForPHYMode:(unsigned long long)a0;
+ (id)wirelessErrorWithCode:(unsigned long long)a0 underlyingError:(id)a1;
+ (id)wirelessErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)disassociate;
- (BOOL)startAccessPointWithName:(id)a0 password:(id)a1 supportedChannels:(id)a2 error:(id *)a3;
- (void)stopAccessPoint;
- (id)appropriateWirelessSoftAPInterface;
- (id)supportedChannelsForInterface:(id)a0;
- (id)randomAcessPointPassword;
- (id)randomAcessPointSSID;
- (void)notifyDelegatesDidAttemptNetworkSwitch:(BOOL)a0;
- (void)notifyDelegatesWillAttemptNetworkSwitch:(long long)a0;
- (BOOL)associateWithNetwork:(id)a0 password:(id)a1 security:(unsigned long long)a2 error:(id *)a3;
- (BOOL)startIPService;
- (BOOL)stopIPService;
- (BOOL)startAccessPointWithName:(id)a0 password:(id)a1 error:(id *)a2;
- (void)updateAWDLTrafficRegistrationStatus:(BOOL)a0 forRemoteMACAddress:(id)a1;
- (BOOL)attemptToAssociateWithNetwork:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)attemptToAssociateWithNetwork:(id)a0 password:(id)a1 timeout:(unsigned long long)a2 retryDelay:(unsigned long long)a3 error:(id *)a4;
- (id)appropriateWirelessClientInterface;
- (id)appropriateChannelForInterface:(id)a0 supportedChannels:(id)a1;
- (id)wirelessChannelInterface:(id)a0 channelNumber:(int)a1 frequencyBand:(long long)a2 channelWidth:(long long)a3;
- (void)updateCurrentWirelessSSID;
- (void)saveWirelessConfiguration;
- (void)restoreWirelessConfiguration;
- (void)printWirelessInformation;
- (id)wirelessInformation;

@end
