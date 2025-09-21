@interface NTPBSmarterFetchResponse : PBCodable <NSCopying> {
    struct { unsigned char toTimestamp : 1; unsigned char recordCount : 1; } _has;
}

@property (nonatomic) char hasRecordCount;
@property (nonatomic) int recordCount;
@property (nonatomic) char hasToTimestamp;
@property (nonatomic) long long toTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
