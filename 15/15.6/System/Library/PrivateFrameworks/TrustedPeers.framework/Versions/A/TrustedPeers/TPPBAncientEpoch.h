@interface TPPBAncientEpoch : PBCodable <NSCopying> {
    struct { unsigned char candidateEpoch : 1; unsigned char myEpoch : 1; } _has;
}

@property (nonatomic) char hasMyEpoch;
@property (nonatomic) unsigned long long myEpoch;
@property (nonatomic) char hasCandidateEpoch;
@property (nonatomic) unsigned long long candidateEpoch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
