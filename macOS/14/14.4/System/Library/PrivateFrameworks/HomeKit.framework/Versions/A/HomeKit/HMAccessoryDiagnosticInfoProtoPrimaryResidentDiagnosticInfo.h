@class HMRemoteEventRouterProtoServerDiagnosticInfo, HMAccessoryInfoProtoWifiNetworkInfoEvent, NSMutableArray;

@interface HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWifiInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiInfo;
@property (retain, nonatomic) NSMutableArray *visibleAccessoriesInfos;
@property (retain, nonatomic) NSMutableArray *visibleIDSDevices;
@property (readonly, nonatomic) BOOL hasEventRouterServerInfo;
@property (retain, nonatomic) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;

+ (Class)visibleAccessoriesInfoType;
+ (Class)visibleIDSDevicesType;

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
- (void)addVisibleAccessoriesInfo:(id)a0;
- (void)addVisibleIDSDevices:(id)a0;
- (void)clearVisibleAccessoriesInfos;
- (void)clearVisibleIDSDevices;
- (id)visibleAccessoriesInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleAccessoriesInfosCount;
- (id)visibleIDSDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleIDSDevicesCount;

@end
