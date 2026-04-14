@interface CLPRTVisit : PBCodable <NSCopying> {
    struct { unsigned char entryTime : 1; unsigned char exitTime : 1; } _has;
}

@property (nonatomic) BOOL hasEntryTime;
@property (nonatomic) double entryTime;
@property (nonatomic) BOOL hasExitTime;
@property (nonatomic) double exitTime;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
