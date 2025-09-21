@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char countCellular : 1; unsigned char countWifi : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCountWifi;
@property (nonatomic) unsigned int countWifi;
@property (nonatomic) char hasCountCellular;
@property (nonatomic) unsigned int countCellular;

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
