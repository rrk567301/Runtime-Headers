@class NSData;

@interface HDCodableMenstrualCyclesExperienceModel : PBCodable <NSCopying> {
    struct { unsigned char epoch : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMenstrualCyclesExperienceModelData;
@property (retain, nonatomic) NSData *menstrualCyclesExperienceModelData;
@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) long long epoch;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
