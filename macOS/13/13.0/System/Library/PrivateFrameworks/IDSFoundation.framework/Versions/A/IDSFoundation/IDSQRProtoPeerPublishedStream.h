@interface IDSQRProtoPeerPublishedStream : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerStreamIds;
}

@property (nonatomic) unsigned long long peerParticipantId;
@property (readonly, nonatomic) unsigned long long peerStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerStreamIds;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPeerStreamIds;
- (void)addPeerStreamIds:(unsigned int)a0;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPeerStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
