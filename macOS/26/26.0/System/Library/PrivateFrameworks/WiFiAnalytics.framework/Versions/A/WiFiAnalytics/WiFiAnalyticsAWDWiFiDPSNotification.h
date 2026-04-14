@interface WiFiAnalyticsAWDWiFiDPSNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cca : 1; unsigned char problemAC : 1; unsigned char symptom : 1; unsigned char txBETrId : 1; unsigned char txBKTrId : 1; unsigned char txVITrId : 1; unsigned char txVOTrId : 1; unsigned char facetimeCallInProgress : 1; unsigned char isNANEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSymptom;
@property (nonatomic) int symptom;
@property (nonatomic) BOOL hasProblemAC;
@property (nonatomic) unsigned int problemAC;
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL facetimeCallInProgress;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) unsigned int cca;
@property (nonatomic) BOOL hasTxBETrId;
@property (nonatomic) unsigned int txBETrId;
@property (nonatomic) BOOL hasTxBKTrId;
@property (nonatomic) unsigned int txBKTrId;
@property (nonatomic) BOOL hasTxVITrId;
@property (nonatomic) unsigned int txVITrId;
@property (nonatomic) BOOL hasTxVOTrId;
@property (nonatomic) unsigned int txVOTrId;
@property (nonatomic) BOOL hasIsNANEnabled;
@property (nonatomic) BOOL isNANEnabled;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsSymptom:(id)a0;
- (id)symptomAsString:(int)a0;

@end
