@class NSMutableArray;

@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying>

@property (nonatomic) unsigned long long hashedUserId;
@property (nonatomic) unsigned long long snapshotTimestamp;
@property (retain, nonatomic) NSMutableArray *interactions;

+ (Class)interactionsType;

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
- (void)addInteractions:(id)a0;
- (void)clearInteractions;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)interactionsCount;

@end
