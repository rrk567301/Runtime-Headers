@class CKDPRecordZoneIdentifier, NSData, CKDPDate, NSMutableArray;

@interface CKDPAdopterCapabilitiesCheckRequest : PBRequest <NSCopying> {
    struct { unsigned char excludeDevicesWithoutCapabilityCheckingSupport : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneLevelCapabilities;
@property (retain, nonatomic) NSMutableArray *recordLevelCapabilities;
@property (retain, nonatomic) NSMutableArray *fieldLevelCapabilities;
@property (readonly, nonatomic) BOOL hasExcludeZoneAccessBefore;
@property (retain, nonatomic) CKDPDate *excludeZoneAccessBefore;
@property (nonatomic) BOOL hasExcludeDevicesWithoutCapabilityCheckingSupport;
@property (nonatomic) BOOL excludeDevicesWithoutCapabilityCheckingSupport;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (id)options;
+ (Class)fieldLevelCapabilitiesType;
+ (Class)recordLevelCapabilitiesType;
+ (Class)zoneLevelCapabilitiesType;

- (Class)responseClass;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)recordLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (void)addFieldLevelCapabilities:(id)a0;
- (void)addRecordLevelCapabilities:(id)a0;
- (void)addZoneLevelCapabilities:(id)a0;
- (void)clearFieldLevelCapabilities;
- (void)clearRecordLevelCapabilities;
- (void)clearZoneLevelCapabilities;
- (id)fieldLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldLevelCapabilitiesCount;
- (unsigned long long)recordLevelCapabilitiesCount;
- (id)zoneLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneLevelCapabilitiesCount;

@end
