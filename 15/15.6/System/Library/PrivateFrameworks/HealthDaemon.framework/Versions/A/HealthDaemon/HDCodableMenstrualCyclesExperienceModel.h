@class NSData;

@interface HDCodableMenstrualCyclesExperienceModel : PBCodable <NSCopying> {
    struct { unsigned char epoch : 1; } _has;
}

@property (readonly, nonatomic) char hasMenstrualCyclesExperienceModelData;
@property (retain, nonatomic) NSData *menstrualCyclesExperienceModelData;
@property (nonatomic) char hasEpoch;
@property (nonatomic) long long epoch;

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
