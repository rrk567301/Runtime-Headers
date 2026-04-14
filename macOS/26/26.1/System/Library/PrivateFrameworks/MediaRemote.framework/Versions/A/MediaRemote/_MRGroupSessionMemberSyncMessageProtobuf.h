@class NSMutableArray;

@interface _MRGroupSessionMemberSyncMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *members;
@property (retain, nonatomic) NSMutableArray *pendingParticipants;

+ (Class)participantsType;
+ (Class)membersType;
+ (Class)pendingParticipantsType;

- (void)clearParticipants;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void)addParticipants:(id)a0;
- (id)description;
- (unsigned long long)participantsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMembers:(id)a0;
- (id)membersAtIndex:(unsigned long long)a0;
- (void)addPendingParticipants:(id)a0;
- (void)clearMembers;
- (void)clearPendingParticipants;
- (unsigned long long)membersCount;
- (id)pendingParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)pendingParticipantsCount;

@end
