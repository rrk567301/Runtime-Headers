@interface MSPMediaSyncHeader : PBCodable <NSCopying> {
    struct { unsigned char syncType : 1; unsigned char totalPackages : 1; } _has;
}

@property (nonatomic) BOOL hasTotalPackages;
@property (nonatomic) int totalPackages;
@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) int syncType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsSyncType:(id)a0;
- (id)syncTypeAsString:(int)a0;

@end
