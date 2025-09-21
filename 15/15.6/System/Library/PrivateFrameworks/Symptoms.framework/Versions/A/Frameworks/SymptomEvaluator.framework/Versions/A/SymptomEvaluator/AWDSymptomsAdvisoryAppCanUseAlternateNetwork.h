@class NSString;

@interface AWDSymptomsAdvisoryAppCanUseAlternateNetwork : PBCodable <NSCopying> {
    struct { unsigned char allFlows : 1; unsigned char altUsage : 1; unsigned char jumboFlows : 1; unsigned char timestamp : 1; unsigned char wifiUsage : 1; unsigned char wwanUsage : 1; unsigned char bailOutOf : 1; unsigned char deliberation : 1; unsigned char rationale : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) char hasBailOutOf;
@property (nonatomic) int bailOutOf;
@property (nonatomic) char hasDeliberation;
@property (nonatomic) int deliberation;
@property (nonatomic) char hasRationale;
@property (nonatomic) int rationale;
@property (nonatomic) char hasWwanUsage;
@property (nonatomic) unsigned long long wwanUsage;
@property (nonatomic) char hasWifiUsage;
@property (nonatomic) unsigned long long wifiUsage;
@property (nonatomic) char hasAltUsage;
@property (nonatomic) unsigned long long altUsage;
@property (nonatomic) char hasAllFlows;
@property (nonatomic) unsigned long long allFlows;
@property (nonatomic) char hasJumboFlows;
@property (nonatomic) unsigned long long jumboFlows;

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
- (int)StringAsDeliberation:(id)a0;
- (int)StringAsRationale:(id)a0;
- (int)StringAsBailOutOf:(id)a0;
- (id)bailOutOfAsString:(int)a0;
- (id)deliberationAsString:(int)a0;
- (id)rationaleAsString:(int)a0;

@end
