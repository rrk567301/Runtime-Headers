@class NSData, NSMutableArray;

@interface ChannelActivityPersistentPayloadUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participantPersistentPayloadUpdates;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

+ (Class)participantPersistentPayloadUpdatesType;

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
- (void)addParticipantPersistentPayloadUpdates:(id)a0;
- (void)clearParticipantPersistentPayloadUpdates;
- (id)participantPersistentPayloadUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)participantPersistentPayloadUpdatesCount;

@end
