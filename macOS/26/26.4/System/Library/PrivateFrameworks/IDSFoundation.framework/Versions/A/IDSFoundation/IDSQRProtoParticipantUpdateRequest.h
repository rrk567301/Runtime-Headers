@class IDSQRProtoMaterial;

@interface IDSQRProtoParticipantUpdateRequest : PBRequest <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _participantIdLists;
    struct { unsigned char sessionStateCounter : 1; } _has;
}

@property (nonatomic) unsigned int operationFlags;
@property (readonly, nonatomic) unsigned long long participantIdListsCount;
@property (readonly, nonatomic) unsigned long long *participantIdLists;
@property (readonly, nonatomic) BOOL hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addParticipantIdList:(unsigned long long)a0;
- (void)clearParticipantIdLists;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)a0;
- (void)setParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
