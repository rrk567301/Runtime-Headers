@class NSString, HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor, HMAccessoryDiagnosticInfoProtoIdsInfo, HMSoftwareUpdateEventProtoSoftwareUpdateProgress, HMAccessoryInfoProtoWifiNetworkInfoEvent, NSMutableArray, HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo, HMAccessoryDiagnosticInfoProtoCloudInfo, HMRemoteEventRouterProtoServerDiagnosticInfo;

@interface HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char generationTime : 1; unsigned char sfProblemFlags : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaRouteIdString;
@property (retain, nonatomic) NSString *mediaRouteIdString;
@property (readonly, nonatomic) BOOL hasWifiInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiInfo;
@property (readonly, nonatomic) BOOL hasCurrentAccessoryInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo *currentAccessoryInfo;
@property (readonly, nonatomic) BOOL hasCloudInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoCloudInfo *cloudInfo;
@property (readonly, nonatomic) BOOL hasIdsInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoIdsInfo *idsInfo;
@property (readonly, nonatomic) BOOL hasEventRouterServerInfo;
@property (retain, nonatomic) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;
@property (nonatomic) BOOL hasGenerationTime;
@property (nonatomic) double generationTime;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) BOOL hasModelIdentifier;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) BOOL hasRegionInfo;
@property (retain, nonatomic) NSString *regionInfo;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasSoftwareUpdateDescriptor;
@property (retain, nonatomic) HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor *softwareUpdateDescriptor;
@property (readonly, nonatomic) BOOL hasSoftwareUpdateProgress;
@property (retain, nonatomic) HMSoftwareUpdateEventProtoSoftwareUpdateProgress *softwareUpdateProgress;
@property (nonatomic) BOOL hasSfProblemFlags;
@property (nonatomic) unsigned long long sfProblemFlags;
@property (retain, nonatomic) NSMutableArray *networkInfos;
@property (retain, nonatomic) NSMutableArray *networkServiceInfos;
@property (retain, nonatomic) NSMutableArray *networkVisibleDeviceInfos;
@property (retain, nonatomic) NSMutableArray *proximityVisibleDeviceInfos;

+ (Class)networkInfoType;
+ (Class)proximityVisibleDeviceInfosType;
+ (Class)networkServiceInfoType;
+ (Class)networkVisibleDeviceInfosType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNetworkInfo:(id)a0;
- (void)addProximityVisibleDeviceInfos:(id)a0;
- (void)addNetworkServiceInfo:(id)a0;
- (void)addNetworkVisibleDeviceInfos:(id)a0;
- (void)clearNetworkInfos;
- (void)clearNetworkServiceInfos;
- (void)clearNetworkVisibleDeviceInfos;
- (void)clearProximityVisibleDeviceInfos;
- (id)networkInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInfosCount;
- (id)networkServiceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkServiceInfosCount;
- (id)networkVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)networkVisibleDeviceInfosCount;
- (id)proximityVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)proximityVisibleDeviceInfosCount;

@end
