@interface BMPBScreenSharingEvent : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char isStart : 1; } _has;
}

@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;

@end
