@interface NTPBAlternateHeadline : PBCodable <NSCopying> {
    struct { unsigned char articleHeadlineTreatmentId : 1; unsigned char articleHeadlineTreatmentState : 1; } _has;
}

@property (nonatomic) char hasArticleHeadlineTreatmentState;
@property (nonatomic) int articleHeadlineTreatmentState;
@property (nonatomic) char hasArticleHeadlineTreatmentId;
@property (nonatomic) int articleHeadlineTreatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
