@interface AWDSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying> {
    struct { unsigned char localState : 1; unsigned char remoteState : 1; unsigned char timestamp : 1; unsigned char migratorType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMigratorType;
@property (nonatomic) int migratorType;
@property (nonatomic) char hasLocalState;
@property (nonatomic) long long localState;
@property (nonatomic) char hasRemoteState;
@property (nonatomic) long long remoteState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMigratorType:(id)a0;
- (id)migratorTypeAsString:(int)a0;

@end
