@class NSString, NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERRequestSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserQuery;
@property (retain, nonatomic) NSString *userQuery;
@property (retain, nonatomic) NSMutableArray *turnSummaries;

+ (Class)turnSummariesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTurnSummaries:(id)a0;
- (void)clearTurnSummaries;
- (id)turnSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)turnSummariesCount;

@end
