@interface AWDDEDFinisherEnded : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char numbytes : 1; unsigned char timestamp : 1; unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasState;
@property (nonatomic) int state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;

@end
