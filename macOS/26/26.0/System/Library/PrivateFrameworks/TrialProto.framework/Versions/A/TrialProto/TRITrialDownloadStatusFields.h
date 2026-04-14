@interface TRITrialDownloadStatusFields : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
