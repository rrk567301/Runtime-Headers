@class C2MPDeviceInfo, NSString, C2MPServerInfo, C2MPNetworkEvent, C2MPGenericEvent, C2MPCloudKitInfo;

@interface C2MPMetric : PBCodable <NSCopying> {
    struct { unsigned char reportFrequency : 1; unsigned char reportFrequencyBase : 1; unsigned char triggers : 1; unsigned char metricType : 1; unsigned char reportTransportAllowExpensiveAccess : 1; unsigned char reportTransportAllowPowerNapScheduling : 1; } _has;
}

@property (nonatomic) char hasMetricType;
@property (nonatomic) int metricType;
@property (readonly, nonatomic) char hasDeviceInfo;
@property (retain, nonatomic) C2MPDeviceInfo *deviceInfo;
@property (readonly, nonatomic) char hasCloudkitInfo;
@property (retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo;
@property (readonly, nonatomic) char hasServerInfo;
@property (retain, nonatomic) C2MPServerInfo *serverInfo;
@property (nonatomic) char hasTriggers;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic) char hasReportFrequency;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) char hasReportFrequencyBase;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) char hasReportTransportAllowExpensiveAccess;
@property (nonatomic) char reportTransportAllowExpensiveAccess;
@property (nonatomic) char hasReportTransportAllowPowerNapScheduling;
@property (nonatomic) char reportTransportAllowPowerNapScheduling;
@property (readonly, nonatomic) char hasReportTransportSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier;
@property (readonly, nonatomic) char hasReportTransportSourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) char hasNetworkEvent;
@property (retain, nonatomic) C2MPNetworkEvent *networkEvent;
@property (readonly, nonatomic) char hasGenericEvent;
@property (retain, nonatomic) C2MPGenericEvent *genericEvent;

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
- (int)StringAsMetricType:(id)a0;
- (id)metricTypeAsString:(int)a0;

@end
