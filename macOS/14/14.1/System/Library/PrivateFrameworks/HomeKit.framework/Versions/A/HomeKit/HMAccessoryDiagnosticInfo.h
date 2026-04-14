@class NSString, NSUUID, HMFWiFiNetworkInfo, NSDate, HMFSoftwareVersion;

@interface HMAccessoryDiagnosticInfo : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *connectedClientsDescription;
@property (readonly, nonatomic) BOOL cloudkitAccountStatusGood;
@property (readonly, nonatomic) BOOL cdpStatusGood;
@property (readonly, nonatomic) BOOL firstCloudImportDone;
@property (readonly, nonatomic) BOOL isRunningHH2;
@property (readonly, nonatomic) unsigned long long numHomes;
@property (readonly, nonatomic) NSUUID *currentAccessoryUUID;
@property (readonly, nonatomic) NSString *currrentAccessoryMediaRouteId;
@property (readonly, nonatomic) BOOL idsStatusGood;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) HMFWiFiNetworkInfo *wifiInfo;
@property (readonly, nonatomic) BOOL isEventRouterServerConnected;
@property (readonly, nonatomic) NSDate *serverLastConnected;
@property (readonly, nonatomic) BOOL isPrimaryResident;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;

@end
