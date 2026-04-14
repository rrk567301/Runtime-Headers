@interface AWDHomeKitUserPresenceCompute : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char compute : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCompute;
@property (nonatomic) int compute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)computeAsString:(int)a0;
- (int)StringAsCompute:(id)a0;

@end
