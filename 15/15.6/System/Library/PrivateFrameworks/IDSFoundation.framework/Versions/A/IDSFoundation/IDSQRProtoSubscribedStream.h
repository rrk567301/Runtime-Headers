@interface IDSQRProtoSubscribedStream : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerStreamIds;
    struct { unsigned char peerParticipantId : 1; unsigned char isSeamlessTransition : 1; unsigned char wildcardSubscription : 1; } _has;
}

@property (nonatomic) char hasWildcardSubscription;
@property (nonatomic) char wildcardSubscription;
@property (nonatomic) char hasPeerParticipantId;
@property (nonatomic) unsigned long long peerParticipantId;
@property (readonly, nonatomic) unsigned long long peerStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerStreamIds;
@property (nonatomic) char hasIsSeamlessTransition;
@property (nonatomic) char isSeamlessTransition;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPeerStreamIds:(unsigned int)a0;
- (void)clearPeerStreamIds;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPeerStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
