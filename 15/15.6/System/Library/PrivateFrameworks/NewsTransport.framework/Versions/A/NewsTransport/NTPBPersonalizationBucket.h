@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {
    struct { unsigned char maximum : 1; unsigned char minimum : 1; unsigned char treatmentId : 1; } _has;
}

@property (nonatomic) char hasMinimum;
@property (nonatomic) long long minimum;
@property (nonatomic) char hasMaximum;
@property (nonatomic) long long maximum;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) long long treatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
