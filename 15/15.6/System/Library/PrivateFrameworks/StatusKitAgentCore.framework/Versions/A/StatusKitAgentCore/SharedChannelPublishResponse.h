@interface SharedChannelPublishResponse : PBCodable <NSCopying> {
    struct { unsigned char retryIntervalSeconds : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasRetryIntervalSeconds;
@property (nonatomic) unsigned int retryIntervalSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
