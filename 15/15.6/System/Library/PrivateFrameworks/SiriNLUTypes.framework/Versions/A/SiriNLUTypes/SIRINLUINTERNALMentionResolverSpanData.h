@interface SIRINLUINTERNALMentionResolverSpanData : PBCodable <NSCopying> {
    struct { unsigned char jointScore : 1; unsigned char modelScore : 1; } _has;
}

@property (nonatomic) char hasJointScore;
@property (nonatomic) double jointScore;
@property (nonatomic) char hasModelScore;
@property (nonatomic) double modelScore;

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
