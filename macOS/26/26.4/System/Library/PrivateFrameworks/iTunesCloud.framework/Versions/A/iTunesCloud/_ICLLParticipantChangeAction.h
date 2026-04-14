@class _ICLLParticipantQuery;

@interface _ICLLParticipantChangeAction : PBCodable <NSCopying> {
    long long _participantId;
    _ICLLParticipantQuery *_participantQuery;
    int _status;
    struct { unsigned char participantId : 1; unsigned char status : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
