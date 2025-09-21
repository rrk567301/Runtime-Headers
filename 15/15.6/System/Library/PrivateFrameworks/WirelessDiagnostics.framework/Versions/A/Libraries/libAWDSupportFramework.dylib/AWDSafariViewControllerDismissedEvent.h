@interface AWDSafariViewControllerDismissedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char method : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMethod;
@property (nonatomic) int method;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMethod:(id)a0;
- (id)methodAsString:(int)a0;

@end
