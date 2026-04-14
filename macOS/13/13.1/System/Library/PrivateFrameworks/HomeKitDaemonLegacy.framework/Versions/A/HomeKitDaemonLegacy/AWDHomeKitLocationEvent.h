@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {
    struct { unsigned char notifyOnEntry : 1; unsigned char notifyOnExit : 1; } _has;
}

@property (nonatomic) BOOL hasNotifyOnEntry;
@property (nonatomic) BOOL notifyOnEntry;
@property (nonatomic) BOOL hasNotifyOnExit;
@property (nonatomic) BOOL notifyOnExit;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
