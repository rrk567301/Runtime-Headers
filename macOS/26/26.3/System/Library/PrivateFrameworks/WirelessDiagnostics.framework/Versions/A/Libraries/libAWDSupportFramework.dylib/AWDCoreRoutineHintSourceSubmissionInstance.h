@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable <NSCopying> {
    struct { unsigned char hintSource : 1; } _has;
}

@property (nonatomic) BOOL hasHintSource;
@property (nonatomic) int hintSource;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
