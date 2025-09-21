@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char countCellular : 1; unsigned char countWifi : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCountWifi;
@property (nonatomic) unsigned int countWifi;
@property (nonatomic) BOOL hasCountCellular;
@property (nonatomic) unsigned int countCellular;

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
