@class NSString;

@interface AWDSymptomsSDMParticipant : PBCodable <NSCopying> {
    struct { unsigned char additionalFlags : 1; unsigned char dlThroughputBytesPerSecond : 1; unsigned char participationDelta : 1; unsigned char periodDuration : 1; unsigned char ulThroughputBytesPerSecond : 1; } _has;
}

@property (nonatomic) char hasParticipationDelta;
@property (nonatomic) unsigned long long participationDelta;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasPeriodDuration;
@property (nonatomic) unsigned long long periodDuration;
@property (nonatomic) char hasDlThroughputBytesPerSecond;
@property (nonatomic) unsigned long long dlThroughputBytesPerSecond;
@property (nonatomic) char hasUlThroughputBytesPerSecond;
@property (nonatomic) unsigned long long ulThroughputBytesPerSecond;
@property (nonatomic) char hasAdditionalFlags;
@property (nonatomic) unsigned long long additionalFlags;

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

@end
