@class NSString, NSMutableArray;

@interface FTCPPETInteraction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *mechanism;
@property (nonatomic) BOOL isInbound;
@property (retain, nonatomic) NSString *duration;

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
