@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable <NSCopying> {
    struct { unsigned char hintSource : 1; } _has;
}

@property (nonatomic) char hasHintSource;
@property (nonatomic) int hintSource;

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
