@class _ICLLParticipantQuery;

@interface _ICLLParticipantChangeAction : PBCodable <NSCopying> {
    long long _participantId;
    _ICLLParticipantQuery *_participantQuery;
    int _status;
    struct { unsigned char participantId : 1; unsigned char status : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
