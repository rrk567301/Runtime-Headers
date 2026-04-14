@class _MRGroupSessionParticipantProtobuf;

@interface _MRGroupSessionIdentityShareReplyMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocalParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *localParticipant;
@property (readonly, nonatomic) BOOL hasLeaderParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *leaderParticipant;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
