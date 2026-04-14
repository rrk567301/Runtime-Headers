@interface AWDDEDFinisherStarted : PBCodable <NSCopying> {
    struct { unsigned char numbytes : 1; unsigned char numfiles : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumfiles;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
