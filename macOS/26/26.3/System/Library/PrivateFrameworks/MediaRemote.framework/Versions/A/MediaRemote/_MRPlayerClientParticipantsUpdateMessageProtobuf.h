@class _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRPlayerClientParticipantsUpdateMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (retain, nonatomic) NSMutableArray *participants;

+ (Class)participantsType;

- (void)clearParticipants;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)addParticipants:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)participantsCount;
- (void).cxx_destruct;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
