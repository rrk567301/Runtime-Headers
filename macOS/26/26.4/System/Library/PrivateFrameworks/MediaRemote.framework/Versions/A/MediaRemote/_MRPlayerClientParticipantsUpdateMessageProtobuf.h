@class _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRPlayerClientParticipantsUpdateMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (retain, nonatomic) NSMutableArray *participants;

+ (Class)participantsType;

- (id)participantsAtIndex:(unsigned long long)a0;
- (unsigned long long)participantsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addParticipants:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearParticipants;
- (id)description;
- (void)writeTo:(id)a0;

@end
