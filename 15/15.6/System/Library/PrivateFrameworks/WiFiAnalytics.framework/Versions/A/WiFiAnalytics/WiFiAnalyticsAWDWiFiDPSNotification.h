@interface WiFiAnalyticsAWDWiFiDPSNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cca : 1; unsigned char problemAC : 1; unsigned char symptom : 1; unsigned char facetimeCallInProgress : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSymptom;
@property (nonatomic) int symptom;
@property (nonatomic) char hasProblemAC;
@property (nonatomic) unsigned int problemAC;
@property (nonatomic) char hasFacetimeCallInProgress;
@property (nonatomic) char facetimeCallInProgress;
@property (nonatomic) char hasCca;
@property (nonatomic) unsigned int cca;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSymptom:(id)a0;
- (id)symptomAsString:(int)a0;

@end
