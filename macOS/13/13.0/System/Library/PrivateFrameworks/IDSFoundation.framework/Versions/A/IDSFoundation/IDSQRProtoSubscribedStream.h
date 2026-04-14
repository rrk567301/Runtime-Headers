@interface IDSQRProtoSubscribedStream : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerStreamIds;
    struct { unsigned char isSeamlessTransition : 1; } _has;
}

@property (nonatomic) BOOL wildcardSubscription;
@property (nonatomic) unsigned long long peerParticipantId;
@property (readonly, nonatomic) unsigned long long peerStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerStreamIds;
@property (nonatomic) BOOL hasIsSeamlessTransition;
@property (nonatomic) BOOL isSeamlessTransition;

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
