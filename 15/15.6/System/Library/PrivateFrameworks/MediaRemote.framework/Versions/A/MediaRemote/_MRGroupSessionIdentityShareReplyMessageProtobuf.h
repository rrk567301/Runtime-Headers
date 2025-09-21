@class _MRGroupSessionParticipantProtobuf;

@interface _MRGroupSessionIdentityShareReplyMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLocalParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *localParticipant;
@property (readonly, nonatomic) char hasLeaderParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *leaderParticipant;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
