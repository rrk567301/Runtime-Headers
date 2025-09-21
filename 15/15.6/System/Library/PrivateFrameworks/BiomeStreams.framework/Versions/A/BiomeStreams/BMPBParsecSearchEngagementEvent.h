@class NSString, NSMutableArray;

@interface BMPBParsecSearchEngagementEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasResultId;
@property (retain, nonatomic) NSString *resultId;
@property (readonly, nonatomic) char hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasUserInput;
@property (retain, nonatomic) NSString *userInput;
@property (readonly, nonatomic) char hasCompletedQuery;
@property (retain, nonatomic) NSString *completedQuery;
@property (retain, nonatomic) NSMutableArray *entities;
@property (readonly, nonatomic) char hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) char hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) char hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

+ (Class)entitiesType;

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
- (void)addEntities:(id)a0;
- (void)clearEntities;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;

@end
