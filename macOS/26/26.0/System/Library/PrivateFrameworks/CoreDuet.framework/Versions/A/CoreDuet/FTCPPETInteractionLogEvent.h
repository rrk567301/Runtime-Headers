@class NSMutableArray;

@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying>

@property (nonatomic) unsigned long long hashedUserId;
@property (nonatomic) unsigned long long snapshotTimestamp;
@property (retain, nonatomic) NSMutableArray *interactions;

+ (Class)interactionsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addInteractions:(id)a0;
- (void)clearInteractions;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)interactionsCount;

@end
