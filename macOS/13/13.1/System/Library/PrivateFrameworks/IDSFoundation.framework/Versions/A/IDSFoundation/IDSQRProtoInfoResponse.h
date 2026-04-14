@class NSString;

@interface IDSQRProtoInfoResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeLightweightParticipants;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeParticipants;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeVirtualParticipants;
}

@property (readonly, nonatomic) BOOL hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (readonly, nonatomic) unsigned long long activeParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeParticipants;
@property (readonly, nonatomic) unsigned long long activeLightweightParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeLightweightParticipants;
@property (readonly, nonatomic) unsigned long long activeVirtualParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeVirtualParticipants;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearActiveParticipants;
- (void)addActiveParticipants:(unsigned long long)a0;
- (unsigned long long)activeParticipantsAtIndex:(unsigned long long)a0;
- (void)setActiveParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearActiveLightweightParticipants;
- (void)addActiveLightweightParticipants:(unsigned long long)a0;
- (unsigned long long)activeLightweightParticipantsAtIndex:(unsigned long long)a0;
- (void)setActiveLightweightParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearActiveVirtualParticipants;
- (void)addActiveVirtualParticipants:(unsigned long long)a0;
- (unsigned long long)activeVirtualParticipantsAtIndex:(unsigned long long)a0;
- (void)setActiveVirtualParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
