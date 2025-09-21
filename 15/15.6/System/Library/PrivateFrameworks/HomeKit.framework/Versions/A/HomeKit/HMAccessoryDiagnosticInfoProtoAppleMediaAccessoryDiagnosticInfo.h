@class NSString, HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor, HMAccessoryDiagnosticInfoProtoIdsInfo, HMSoftwareUpdateEventProtoSoftwareUpdateProgress, HMAccessoryInfoProtoWifiNetworkInfoEvent, NSMutableArray, HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo, HMAccessoryDiagnosticInfoProtoCloudInfo, HMRemoteEventRouterProtoServerDiagnosticInfo;

@interface HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char generationTime : 1; unsigned char numAppleMediaAccessories : 1; unsigned char numResidents : 1; unsigned char sfProblemFlags : 1; unsigned char primaryResidentStatus : 1; } _has;
}

@property (readonly, nonatomic) char hasMediaRouteIdString;
@property (retain, nonatomic) NSString *mediaRouteIdString;
@property (readonly, nonatomic) char hasWifiInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiInfo;
@property (readonly, nonatomic) char hasCurrentAccessoryInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo *currentAccessoryInfo;
@property (readonly, nonatomic) char hasCloudInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoCloudInfo *cloudInfo;
@property (readonly, nonatomic) char hasIdsInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoIdsInfo *idsInfo;
@property (readonly, nonatomic) char hasEventRouterServerInfo;
@property (retain, nonatomic) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;
@property (nonatomic) char hasGenerationTime;
@property (nonatomic) double generationTime;
@property (readonly, nonatomic) char hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) char hasModelIdentifier;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) char hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) char hasRegionInfo;
@property (retain, nonatomic) NSString *regionInfo;
@property (readonly, nonatomic) char hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) char hasSoftwareUpdateDescriptor;
@property (retain, nonatomic) HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor *softwareUpdateDescriptor;
@property (readonly, nonatomic) char hasSoftwareUpdateProgress;
@property (retain, nonatomic) HMSoftwareUpdateEventProtoSoftwareUpdateProgress *softwareUpdateProgress;
@property (nonatomic) char hasSfProblemFlags;
@property (nonatomic) unsigned long long sfProblemFlags;
@property (retain, nonatomic) NSMutableArray *networkInfos;
@property (retain, nonatomic) NSMutableArray *networkServiceInfos;
@property (retain, nonatomic) NSMutableArray *networkVisibleDeviceInfos;
@property (retain, nonatomic) NSMutableArray *nearbyVisibleDeviceInfos;
@property (nonatomic) char hasNumAppleMediaAccessories;
@property (nonatomic) long long numAppleMediaAccessories;
@property (nonatomic) char hasNumResidents;
@property (nonatomic) long long numResidents;
@property (nonatomic) char hasPrimaryResidentStatus;
@property (nonatomic) int primaryResidentStatus;

+ (Class)networkInfoType;
+ (Class)nearbyVisibleDeviceInfosType;
+ (Class)networkServiceInfoType;
+ (Class)networkVisibleDeviceInfosType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNetworkInfo:(id)a0;
- (int)StringAsPrimaryResidentStatus:(id)a0;
- (void)addNearbyVisibleDeviceInfos:(id)a0;
- (void)addNetworkServiceInfo:(id)a0;
- (void)addNetworkVisibleDeviceInfos:(id)a0;
- (void)clearNearbyVisibleDeviceInfos;
- (void)clearNetworkInfos;
- (void)clearNetworkServiceInfos;
- (void)clearNetworkVisibleDeviceInfos;
- (id)nearbyVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)nearbyVisibleDeviceInfosCount;
- (id)networkInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInfosCount;
- (id)networkServiceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkServiceInfosCount;
- (id)networkVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)networkVisibleDeviceInfosCount;
- (id)primaryResidentStatusAsString:(int)a0;

@end
