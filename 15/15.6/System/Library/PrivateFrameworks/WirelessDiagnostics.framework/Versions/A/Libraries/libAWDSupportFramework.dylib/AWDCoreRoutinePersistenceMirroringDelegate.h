@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char creationFailureReason : 1; unsigned char mirroringDelegatePresent : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMirroringDelegatePresent;
@property (nonatomic) char mirroringDelegatePresent;
@property (nonatomic) char hasCreationFailureReason;
@property (nonatomic) int creationFailureReason;

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
