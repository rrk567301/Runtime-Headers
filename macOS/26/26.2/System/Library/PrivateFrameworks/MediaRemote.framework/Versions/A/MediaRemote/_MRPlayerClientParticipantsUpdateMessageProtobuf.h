@class _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRPlayerClientParticipantsUpdateMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (retain, nonatomic) NSMutableArray *participants;

+ (Class)participantsType;

- (void)writeTo:(id)a0;
- (void)addParticipants:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearParticipants;
- (void)mergeFrom:(id)a0;
- (unsigned long long)participantsCount;
- (id)dictionaryRepresentation;
- (id)participantsAtIndex:(unsigned long long)a0;

@end
